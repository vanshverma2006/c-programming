#include <stdio.h>


void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 2, b = 4;
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    swap(&a, &b);  

    printf("After swap: a = %d, b = %d\n", a, b); 
    
    return 0;
}