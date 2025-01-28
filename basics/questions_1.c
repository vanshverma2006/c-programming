#include<stdio.h>
int main(){
// volume of a sphere 
    float c=4.0/3.0;
    float pi=3.14;
    float r=7;
    float area=c*pi*r*r*r;
    printf("the area of the sphere is : %f\n",area);

// percentage of subjects
    float x1=90;
    float x2=89;
    float x3=92;
    float x4=88;
    float x5=89.5;
    float percentage=(x1+x2+x3+x4+x5)/5;
    printf("percentage : %f",percentage);

// area of a circle 
    float constant=2;
    float radius;
    printf("\nenter the radius : ");
    scanf("%f",&radius);
    printf("\narea of the circle is : %f",constant*pi*radius*radius);

// sum of 2 numbers 
    float num1,num2;
    printf("\nenter num  : ");
    scanf("%f %f",&num1,&num2);
    printf("\n%f",num1+num2);
    return 0;
}