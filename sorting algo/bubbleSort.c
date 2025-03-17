#include<stdio.h>
int main(){
    int n;
    printf("enter value of n :: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("\nenter array[%d]",i);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (array[j]>array[j+1]){
                int temp;
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    return 0;
}