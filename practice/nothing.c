#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, sum = 0, count = 0, digit;

    
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    
    return (sum == originalNum);
}

int main() {
    int num,totaNum=0;
    int copy = num ;
    while (copy>0){
        totaNum++;
        copy/=10;
    }

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}