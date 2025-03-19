#include<stdio.h>
int main(){
    int n;
    puts("enter a num n :: ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("enter element %d :: ",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if (array[i]>array[j]){
                int temp;
                temp=array[i];
                array[j]=array[i];
                array[i]=array[j];
            }
        }
    }




    return 0;
}