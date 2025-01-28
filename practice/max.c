#include <stdio.h>
/*
    1. simple way
*/
// int max_of_four(int a, int b, int c, int d) {
//     if (a > b && a > c && a > d) {
//         return a;
//     } else if (b > a && b > c && b > d) {
//         return b;
//     } else if (c > a && c > b && c > d) {
//         return c;
//     } else {
//         return d;
//     }
// }

/*
    2. smart way
*/
int max_of_four(int a, int b, int c, int d) {
    int max = a; // Assume a is the largest initially
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
} 

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);


    printf("The maximum number is: %d\n", max_of_four(a,b,c,d));

    return 0;
}