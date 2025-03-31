#include<stdio.h>
void comma(int n){
    for (int i=0;i<n;i++){
        printf("%d",i+1);
        if(i<n-1) printf(",");
    }
}
void rec(int row,int col){
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            printf("*");
        }printf("\n");
    }
}

void square(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("*");
        }puts("");
    }
}

void halfPyramid(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }puts("");
    }
}
void numPyramid(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }puts("");
    }
}
void new(int n){
    for (int i=1;i<=n;i++){
        for (int k=n-i;k>0;k--){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("*");
        }puts("");
    }
}
void pyramid(int n){
    for (int i=1;i<=n;i++){

        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }puts("");
    }
}
void swap (int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    pyramid(n);
    return 0;
}