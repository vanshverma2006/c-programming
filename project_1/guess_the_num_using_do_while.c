#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int guess,guess_num,i;
    guess_num=0;
    i=0;
    printf("\n%d",random_number);
    printf("\t\tGuess the num\n");
    printf("\t\t\t!!RULES!!\n1. A secret number is randomly chosen within a range (e.g., 1-100)\n2. The player guesses the number.\n3. Provide feedback: 'Too high' or 'Too low' after each guess.\n4. The game ends when the player guesses correctly.\n5. Track the number of attempts.\n6. Optional: Limit attempts or add hints for extra challenges.\n");
    do
    {
        printf("Guess the num --> "); scanf("%d",&guess);
        guess_num++;
        i++;
        if (guess<random_number && guess>(random_number-10)){
            printf("oops!! ,guess a little higher\n");
            guess_num++;
            printf("num of guesses left :: %d\n",10-guess_num);
            continue;
        }
        else if (guess>random_number && guess<(random_number+10))
        {
            printf("oops !! guess a little lower\n");
            guess_num++;
            printf("num of guesses left :: %d\n",10-guess_num);
            continue;
        }
        else if (guess<random_number)
        {
            printf("too low\n");
            guess_num++;
            printf("num of guesses left :: %d\n",10-guess_num);
            continue;
        }
        else if (guess>random_number)
        {
            printf("too high\n");
            guess_num++;
            printf("num of guesses left :: %d\n",10-guess_num);
            continue;
        }
        else{
            printf("you won!! the num is :: %d\n",random_number);
            printf("num of guesses taken :: %d\n",guess_num);
            break;
        }
    } while (i<=10);
    if (guess_num==10){
        printf("you lost because the num of guesses has ended\n");
    }
    

    return 0;
}