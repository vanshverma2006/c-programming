#include<stdio.h>
void input(int array[],int n){
    for (int i=0;i<n;i++){
        printf("enter element %d :: ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}

void selectionSort(int array[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
        for (int i =0;i<n;i++){
            printf("%d ",array[i]);
        }
}
int main(){
    int n;
    printf("enter value of n :: ");
    scanf("%d",&n);
    int array[n];
    input(array,n);
    printf("sorted array ");
    selectionSort(array,n);
    return 0;
}