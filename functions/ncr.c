#include<stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);  // 
}

float ncr(int n,int r){
    float result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}
int main(){
    int n,r;
    puts("enter n : ");
    scanf("%d",&n);
    puts("enter r : ");
    scanf("%d",&r);
    printf("%f",ncr(n,r));
    return 0;
}