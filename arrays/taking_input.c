#include<stdio.h>
int main(){
    int array[10];
    for(int i=0;i<10;i++){
        printf("enter the value %d :: ",i+1);   scanf("%d",&array[i]);

    }
    for (int i =0;i<10;i++){
        printf("you entered :: %d\n",array[i]);
    }

    return 0;
}  