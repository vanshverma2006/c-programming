#include<stdio.h>
int main(){
    /*
    pointer:-
    let suppose we make a variable i and gave it a value 
    ab variable i ka ek address hoga so if we make another variable to store the 
    address of i that variable is known as pointer
    */
   int i=2;
   printf("the address of i is :: %p",&i);
   //if we want to see adress in integer 
   printf("\nthe address of i is %u",&i);
//    now lets make a pointer
    int* j=&i;//j is a pointer pointing to i (j is a integer pointer)
    printf("\nthe address of i is %p",j);

    printf("the value at address j %d",*j);// this will give value of i 
    // basically jo variable ke andar value store hai ye output mai vo de deta hai

    // pointer ka bki apna khud ka address hota hai
     
    return 0;
}