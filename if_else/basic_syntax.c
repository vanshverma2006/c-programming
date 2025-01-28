#include<stdio.h>
int main(){
    // check even odd
    int a;
    printf("enter the value of a :: ");scanf("%d",&a);
    
    if (a==0)
    {
        printf("neither odd nor even\n");
    }
    else if(a%2==0){
        printf("the given num is even\n");
    }
    else 
    {
        printf("the num is odd");
    }
    // another way nested if else
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
