#include <SDL.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define GRAVITY 0.3
#define FLAP_STRENGTH -10
#define PIPE_WIDTH 80
#define GAP_HEIGHT 200
#define PIPE_SPEED 4

typedef struct {
    float x, y;
    float velocity;
    SDL_Rect rect;
} Bird;

typedef struct {
    int x;
    int gap_y;
    SDL_Rect top, bottom;
} Pipe;

void reset_pipe(Pipe *pipe) {
    pipe->x = WINDOW_WIDTH;
    pipe->gap_y = rand() % (WINDOW_HEIGHT - GAP_HEIGHT - 100) + 50;
}

void reset_game(Bird *bird, Pipe *pipe, int *score) {
    // Reset bird position and velocity
    bird->y = WINDOW_HEIGHT / 2;
    bird->velocity = 0;
    bird->rect.y = (int)bird->y;

    // Reset pipe position
    reset_pipe(pipe);

    // Reset score
    *score = 0;
}

void display_game_over(SDL_Renderer *renderer, int score) {
    // Add game over text and score display here
    // For simplicity, we show it as a basic message on the console
    printf("Game Over! Final Score: %d\n", score);
    SDL_Color white = {255, 255, 255, 255};
    
    // Display "Press R to Restart"
    // In a full implementation, SDL_ttf would be used to render text to the screen.
}

int main() {
    SDL_Init(SDL_INIT_VIDEO);
    srand((unsigned int)time(NULL));

    SDL_Window *window = SDL_CreateWindow("Flappy Bird Clone", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                          WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Load images
    SDL_Surface* bg_surface = SDL_LoadBMP("background.bmp");
    SDL_Texture* bg_texture = SDL_CreateTextureFromSurface(renderer, bg_surface);
    SDL_FreeSurface(bg_surface);

    SDL_Surface* bird_surface = SDL_LoadBMP("bird.bmp");
    SDL_Texture* bird_texture = SDL_CreateTextureFromSurface(renderer, bird_surface);
    SDL_FreeSurface(bird_surface);

    SDL_Surface* pipe_surface = SDL_LoadBMP("pipe.bmp");
    SDL_Texture* pipe_texture = SDL_CreateTextureFromSurface(renderer, pipe_surface);
    SDL_FreeSurface(pipe_surface);

    Bird bird = {200, WINDOW_HEIGHT / 2, 0, {200, WINDOW_HEIGHT / 2, 40, 40}};
    Pipe pipe;
    reset_pipe(&pipe);

    bool running = true;
    bool game_over = false;
    SDL_Event event;
    int score = 0;

    while (running) {
        SDL_Delay(16); // ~60 FPS

        // Event handling
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }

            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_SPACE && !game_over) {
                bird.velocity = FLAP_STRENGTH;
            }

            // Check for restart
            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_r && game_over) {
                // Reset the game if 'R' is pressed after Game Over
                reset_game(&bird, &pipe, &score);
                game_over = false;
            }
        }

        if (!game_over) {
            // Update bird
            bird.velocity += GRAVITY;
            bird.y += bird.velocity;
            bird.rect.y = (int)bird.y;

            // Update pipe
            pipe.x -= PIPE_SPEED;
            if (pipe.x + PIPE_WIDTH < 0) {
                reset_pipe(&pipe);
                score++;
            }

            // Update pipe rects
            pipe.top = (SDL_Rect){pipe.x, 0, PIPE_WIDTH, pipe.gap_y};
            pipe.bottom = (SDL_Rect){pipe.x, pipe.gap_y + GAP_HEIGHT, PIPE_WIDTH, WINDOW_HEIGHT - (pipe.gap_y + GAP_HEIGHT)};

            // Collision detection
            if (SDL_HasIntersection(&bird.rect, &pipe.top) ||
                SDL_HasIntersection(&bird.rect, &pipe.bottom) ||
                bird.y < 0 || bird.y + bird.rect.h > WINDOW_HEIGHT) {
                game_over = true;
            }

            // Draw background
            SDL_RenderCopy(renderer, bg_texture, NULL, NULL);

            // Draw bird
            SDL_RenderCopy(renderer, bird_texture, NULL, &bird.rect);

            // Draw pipes
            SDL_RenderCopy(renderer, pipe_texture, NULL, &pipe.top);
            SDL_RenderCopy(renderer, pipe_texture, NULL, &pipe.bottom);
        } else {
            // Show Game Over screen and option to restart
            display_game_over(renderer, score);
        }

        // Display the score (you can use SDL_ttf for actual text)
        SDL_RenderPresent(renderer);
    }

    // Clean up
    SDL_DestroyTexture(bg_texture);
    SDL_DestroyTexture(bird_texture);
    SDL_DestroyTexture(pipe_texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}