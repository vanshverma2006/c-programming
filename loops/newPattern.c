#include<stdio.h>
int main(){
    int n;
    while (1)
    {
        printf("enter a odd num :: ");
        scanf("%d",&n);
        if(n%2==0){
            printf("\nyou entered even num :");
        }
        else{
            break;
        }
    }
    
   
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j>=(n+1)/2&&i==1||i==n&&j<=(n+1)/2||j==(n+1)/2){
                printf("*");
            }
            else if(i==(n+1)/2||i>=(n+1)/2&&j==n||i<=(n+1)/2&&j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }    return 0;
}