#include <stdio.h>

int main() {
    int num = 42; // Declare and initialize an integer
    printf("Integer value: %d\n", num); // Print integer using %d

    float fl=7.2;
    printf("float value: %f\n",fl);

    float pi = 3.14; // Declare and initialize a float
    printf("Float value: %.2f\n", pi); // Print float using %.2f for 2 decimal places

    double bigDecimal = 3.14159265358979; // Declare and initialize a double
    printf("Double value: %lf\n", bigDecimal); // in this we didn't tell how many decimal places

    double largeDecimal = 3.14159265358979; // Declare and initialize a double
    printf("Double value: %.8lf\n", largeDecimal); // Print double using %.8lf for 8 decimal places

    char letter = 'A'; // Declare and initialize a character
    printf("Character value: %c\n", letter); // Print character using %c

    short sh=2345;//it also stores integers but from -32768 to +32768
    printf("%d\n",sh);

    long l=23243546;
    printf("%d",l);

    long long ll=1233456576789;
    printf("%d",ll);


    // basic example of all types:-->
    int age = 25;
    float height = 5.9;
    double Pi = 3.14159265359;
    char initial = 'J';// we can just print a single character
    char string[] = "vansh";

    printf("Integer: %d\n", age);        // Print integer
    printf("Float: %.1f\n", height);    // Print float
    printf("Double: %.5lf\n", Pi);      // Print double
    printf("Character: %c\n", initial); // Print character
    printf("string : %s\n",string);
    return 0;
}