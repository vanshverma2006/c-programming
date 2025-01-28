//take 3 inputs and check if tjey can be sides of triangle
#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the value of x :: "); scanf("%d",&x);
    printf("\nenter the value of y :: "); scanf("%d",&y);
    printf("\nenter the value of z :: "); scanf("%d",&z);
    if (x+y>z && y+z>x && x+z>y){
        printf("yes these can be a side of triangle");
    }else{
        printf("no they cannot be the sides of triangle");
    }
    return 0;
}