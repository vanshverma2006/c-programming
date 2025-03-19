#include<stdio.h>
int min (int a,int b){
    if(a>b) return b;
    else return a;
}
int gcd(int firstNum,int secondNum ){
    int hcf=0;
    for (int i=1;i<=min(firstNum,secondNum);i++){
        if(firstNum%i==0&& secondNum%i==0){
            hcf=i;
        }
    }
        return hcf;
}
 
int main(){
    int firstNum,secondNum;
    scanf("%d",&firstNum);
    scanf("%d",&secondNum);
    printf("\n%d",gcd(firstNum,secondNum));
    return 0;
}