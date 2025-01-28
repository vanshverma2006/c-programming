#include<stdio.h>
int sum(int*a,int*b){
    *a=2;//this is how we can change the value of x using its address
        // because in normal case it is not possible
        /*
        so basically arguments are address of x here and at address of x we are 
        changing its value 

        in normal case we normaly use the value and uski copy jati hai function mai 

        */
    return *a + *b;
}
int main(){
    int x=10,y=12;
    printf("the sum of x and y is :: %d\n",sum(&x,&y));//ans is 14
    printf("the value of x :: %d ",x);//the ans is 2 
    return 0;
}