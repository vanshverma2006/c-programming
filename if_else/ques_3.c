// num should be divisible byb 3 or 5 but not by 15
#include<stdio.h>
int main(){
    int x;
    printf("enter a num :: "); scanf("%d",&x);
    if (x%5==0 || x%3==0){
        if (x%15==0){
            printf("invalid");
        }else{
            printf("valid");
        }
    }else{
        printf("invalid");
    }
    return 0;
}