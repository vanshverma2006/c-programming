#include<stdio.h>
int main(){
    int a=23;
    int* ptr=&a;
        printf("the value of ptr :: %d",ptr);
        ptr++;// jitne bytes data type lega utne add ho jayenge isme
            // like int agar 4 byte le raha hai to ptr ki initial value mai +4 ho jayega
             



    return 0;

}