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
        for(int j=i+1;j<n;j++){
            if (array[i]>array[j]){
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    for (int i=0 ;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (array[i]==array[j]){
                printf("duplicates : %d",array[j]);

            }
        }
    }

    return 0;
}