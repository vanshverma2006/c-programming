#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    // int * ptr=&array[0];
    // in short we can also write
    int*ptr=array;//same as above
    for (int i =0;i<5;i++){

        printf("the value is %d\n",*ptr);// this is how we can print value of array using pointer
        ptr++;
    }
    return 0;
}