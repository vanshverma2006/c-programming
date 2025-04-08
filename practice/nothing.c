#include<stdio.h>
void inputArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("enter value of %d : ",i+1);
        scanf("%d",&array[i]);
    }
}
void kShift(int array[],int n,int k ){
    for (int i=0;i<k;i++){
        for (int j=0;j<n;j++){
            if (j==n-1){
                int temp;
                temp=array[0];
                array[0]=array[n-1];
                array[n-1]=temp;
                for(int k=1;k<n;k++){
                    int temp ;
                    temp=array[n-k-2];
                    array[n-k-2]=array[n-k-1];
                    array[n-k-1]=temp;
                }
            }
        }
    }
}
void printArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int n;
    printf("enter value of n : ");
    scanf("%d",&n);
    int array[n];
    inputArray(array,n);
    int k;
    printf("enter value of k : ");
    scanf("%d",&k);
    kShift(array,n,k);
    printArray(array,n);

    return 0;
}