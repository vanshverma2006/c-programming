#include<stdio.h>
void input(int array[],int n){
    for (int i=0;i<n;i++){
    
    scanf("%d",&array[i]);
    }
}
void sort(int array[],int n){
    input(array,n);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(array[i]<array[j] && array[i]==0){
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;

            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
 void input2DArray(int m,int array[][m],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&array[i][j]);
        }
    }
 }
 void printArray(int n ,int m,int array[][m]){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",array[i][j]);
        }puts("");
    }
 }
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    input2DArray(n,array,n);
    printArray(n,n,array);

    return 0;
}