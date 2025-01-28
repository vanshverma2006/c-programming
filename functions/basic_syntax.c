#include<stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int x, int y) {
    return x + y; // Return the sum instead of printing it
}

int main() {
    int x, y, result;
    x = 9;
    y = 9;
    result = sum(x, y); // Store the returned value
    printf("The sum is: %d\n", result); // Print the result in main
    return 0; 
}