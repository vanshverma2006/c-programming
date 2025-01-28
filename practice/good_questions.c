#include<stdio.h>
int main(){
    int num,sum=0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Calculate the sum of digits
    while (num > 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10;       // Remove the last digit
    }

    // Print the result
    printf("The sum of the digits is: %d\n", sum);


    return 0;
}