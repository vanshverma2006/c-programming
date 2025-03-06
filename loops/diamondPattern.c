#include <stdio.h>
void starPattern(int n);
void starPattern(int n){
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    starPattern(n);
    
    return 0;
}