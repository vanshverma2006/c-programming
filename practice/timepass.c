#include<stdio.h>
int power(int base ,int power){
    int result =1;
    for (int i=0;i<power;i++){
        result *= base ;
    }
    return result;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}