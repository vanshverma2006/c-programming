#include<stdio.h>
int main(){
    // so we can use basic operations like +,-,*,/,%
    int x=4;
    int y=2;

    int add;
    add=x+y;
    printf("%d",add);

    int subtract;
    subtract=x-y;
    printf("\n%d",subtract);

    int multiply;
    multiply=x*y;
    printf("\n%d",multiply);

    int divide;
    divide=x/y;
    printf("\n%d",divide);

    int a=3;
    int b=2;
    printf("\n%d",a/b);// in this case it will not give us the ans in float it will give integer ans 
    // so to deal with it we use float data type 

    float p=3.0;
    float q=2.0;
    printf("\n%f",p/q);
    return 0;

    float z=5/2;
    // it will give 2 output because hamne int ka division karaya to ek int hi ans aya hoga and us int ko badme float z mai store kara diya that's why ans is 2 nott 2.5
    float num=5.0/2;
    //now ans will be 2.5

    printf("%d",x%y);// it will give remainder 
}