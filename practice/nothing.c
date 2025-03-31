#include<stdio.h>
int factorial(int n ){
    if (n==1||n==0){
        return 1;
    }
    return n * factorial(n-1);
}

void count(int n){
    if (n==0) return ;
    printf("%d",n);
    count(n-1);
    printf("%d",n);

}
int sum(int end,int s){
    if (end == 0) return s;
    return sum(end-1,s+end);
}
int power(int base,int p){
    int ans ;
    if (power==0) return ans  ;
    return ans =base * power(base,p-1);
}
void floyd(int n) {
    int num = 1; // Start from 1
    for (int i = 1; i <= n; i++) { // Start from 1 to n
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        puts(""); // New line after each row
    }
}
void inputArray(int array[],int n){
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}
void kshift(int array[],int n,int shift){
    
}
int main(){
   int n;
   scanf("%d",&n);
   floyd(n);

    return 0;
}