// && is and operator,|| is or operator
// priority of && is more than || 
#include<stdio.h>
int main(){
    // WAP to check whether a num is 3 digit or not 
    int x;
    printf("enter a num :: "); scanf("%d",&x);
    if(x/100>=1 && x/1000<1){
        printf("the num is three digit ");

    }else{
        printf("the num is not three digit");
    }
    // another simple method
    int y;
    printf("enter a num :: "); scanf("%d",&y);
    if(x>99 && x<1000){
        printf("\nthe num is three digit");
    }
    else{
        printf("\nthe num is not three digit ");
    }


    return 0;
}