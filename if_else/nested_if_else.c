#include<stdio.h>
int main(){
     // nested means if else ke andar ek aur if else use karna
    int x;
    printf("Enter the value of x: ");scanf("%d", &x);

    if (x % 2 == 0) {
        if (x == 0) {
            printf("0\n"); 
        } else {
            printf("even\n");
        }
    } else {
        printf("odd\n");
    } 
    return 0;
}