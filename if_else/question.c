#include<stdio.h>
int main(){
    int m1,m2,m3;
    printf("enter your marks ::"); scanf("%d",&m1);
    printf("enter your marks ::"); scanf("%d",&m2);
    printf("enter your marks ::"); scanf("%d",&m3);
    int total;
    total=(m1+m2+m3)/3;
    /*
    agar if else ke andar koi ek statement likni hai bas then this way
    is also correct
    */
    
    if(total<33)
        printf("fail");
    else
        printf("pass");
    
    return 0;
}