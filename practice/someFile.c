#include<stdio.h>
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void inputArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("enter value of %d : ",i+1);
        scanf("%d",&array[i]);
    }
}
int  sum(int arr[],int n){
    
    int sum =0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
// int something(int array[],int n){
    
//     return array;
// }
int main(){
    // int a=2,b=3;
    // swap(&a,&b);
    // printf("%d %d",a,b);
    int arr[5]={1,2,3,4,5};
    // inputArray(array,5);
    // printf("%d",something(array,5));
    inputArray(arr,5);
    printf("%d",sum(arr,5));
    return 0;
}