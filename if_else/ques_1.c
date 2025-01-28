// return absolute value 
#include<stdio.h>
int main(){
    int x;
    printf("enter a num :: "); scanf("%d",&x);
    if( x < 0){
        printf("\n%dthe absolute value is :: ",-x);
    }else{
        printf("\n%dthe absolute value is :: ",x);
    }
    return 0;
}