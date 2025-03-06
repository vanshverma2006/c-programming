#include <stdio.h>
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
void starPattern(int n);
void starPattern(int n){
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",ncr(i,j));
        }printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    starPattern(n);
    return 0;
}