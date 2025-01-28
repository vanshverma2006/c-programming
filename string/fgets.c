#include <stdio.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Reads up to 49 characters + '\0'

    printf("You entered: %s", str);

    return 0;
}