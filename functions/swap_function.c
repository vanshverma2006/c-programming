#include <stdio.h>

// Function definition (above main)
void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 2, b = 4;
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    swap(&a, &b);  // Pass the addresses of a and b to swap

    printf("After swap: a = %d, b = %d\n", a, b);  // Check the swapped values
    
    return 0;
}