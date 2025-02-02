#include<stdio.h>
int main(){

    // first approach
        int n;
    printf("enter a num :: ");
    scanf("%d",&n);
    int array[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("enter value of array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    int largest,least ;
    largest = array[0][0];
    least=array[0][0];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]>largest){
                largest=array[i][j];
            }
        }
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]<least){
                least=array[i][j];
            }
        }
    }
    printf("%d",largest);
    printf("\n%d",least);


    return 0;
}