#include<stdio.h>
int main(){
    int i=12;
    int* j=&i;//pointer pointing to i
    int ** z=&j;// pointer pointing to j (pointer pointing pointer :))
    printf("%d\n",i);// value of i 
    printf("%d\n",*j);//value of i 
    printf("%d\n",j);//address of i (value of j )
    printf("%d\n",*z);// address of i (value of j )
    
    return 0;
}
