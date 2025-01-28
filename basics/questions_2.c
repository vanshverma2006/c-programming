#include<stdio.h>
int main(){
// take a int as input and print half of it
    int x;
    printf("enter a num : ");
    scanf("%d",&x);
    printf("\n%d",x/2);

//take a float input and print the fractional part of the real number
    float y;
    printf("\nenter a num : ");
    scanf("%f",&y);
    int fr;
    fr=y;
    printf("\n the required num is : %f",y-fr);

return 0;

}