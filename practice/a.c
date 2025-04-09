#include<stdio.h>
void inputArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("enter value of %d : ",i+1);
        scanf("%d",&array[i]);
    }
}
void printArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
void reverseArray(int array[],int n){

    inputArray(array,n);
    int temp[n];
    for (int i = n-1 ;i>=0;i--){
        temp[n-i-1]=array[i];
    }
    for (int i=0;i<n;i++){
        array[i]=temp[i];
    }
    
}
void kShift(int array[],int n,int k){
    inputArray(array,n);
    int temp = n-k;
    int newArray[temp];
    for (int i=0 ;i<temp; i++){
        newArray[i]= array[i];
    }

    
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    
    reverseArray(array,n);
    

    
    return 0;
}