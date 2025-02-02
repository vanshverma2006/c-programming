#include<stdio.h>
int main(){
    int n;
    printf("enter a num :: ");
    scanf("%d",&n);
    int array[n][n],array_2[n][n],final_array[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("enter value of array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    

     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("enter value of array_2[%d][%d] : ",i,j);
            scanf("%d",&array_2[i][j]);
        }
    
     }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            final_array[i][j]=array[i][j]+array_2[i][j];
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("\nfinal_array[%d][%d] :: %d",i,j,final_array[i][j]);
        }
    }

    return 0;
}