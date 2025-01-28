#include<stdio.h>
int main(){
    int x;
    printf("enter num1 : ");
    scanf("%d",&x);
    
    if (x%2==0){
        printf("number is even");
    }else{
        printf("num is odd");
    }
    return 0;
}