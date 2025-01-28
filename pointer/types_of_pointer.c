#include<stdio.h>
int main(){
    // 1. integer pointer :
    int i=12;
    int * j=&i;
    printf("integer pointer :: %p",j);

    // 2 char pointer :
    char ch='a';
    char* character_pointer=&ch;
    printf("char pointer :: %p",character_pointer);

    // same with others like float ,double ,long etc
       


    return 0;
}