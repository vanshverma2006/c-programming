#include<stdio.h>
void inputArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("enter value of %d : ",i+1);
        scanf("%d",&array[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    // for (int i=0;i<n;i++){
    //     scanf("%d",&array[i]);
    // }
    // int * ptr = array;
    // for (int i=0 ;i<n;i++){
    //     printf("%d ",*(ptr + i ));
    // }
    inputArray(array,n);
    int *ptr = array;
    for (int i=0;i<n;i++){
        printf(" value %d ",*(ptr+i));
    }
    for (int i=0;i<n;i++){
        printf(" address %p ",(ptr+i));
    }

    
    return 0;
}