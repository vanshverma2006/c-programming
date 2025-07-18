#include <stdio.h>
#include<string.h>
int main() {

    // char str[100], result[100];
    // int i, j = 0;

    // printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin);

    // for (i = 0; str[i] != '\0'; i++) {
    //     if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
    //         result[j++] = str[i];
    //     }
    // }

    // result[j] = '\0';

    // printf("String with only alphabets: %s\n", result);


// 2
    char str[100];
    int vowels = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (char *ptr = str; *ptr != '\0'; ptr++) {
        char ch = tolower(*ptr);

        if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        } else if (ch == 'a' || ch == 'e' || ch == 'i' || 
                   ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    

    // char a[100];
    // int b[100];
    // fgets(a,sizeof(a),stdin);
    // int spaces=0,NumOfWords=0;
    // for (int i=0;i<strlen(a);i++){
        
    //     if (a[i]==' '){
    //         spaces++;
    //     }
    // }
    // NumOfWords=spaces+1;
    //     int el=0,j=0;
    //     for (int j=0;j<NumOfWords;j++){
    // for (int i=0;i<strlen(a);i++){
    //     if (a[i]==' '){
    //         el=0;
    //     }else{
    //         el++;
    //         b[j]=el;
        
    //     }
    // }    
    //     }
    //     for (int i=0;i<NumOfWords;i++){
    //         printf("%d ",b[i]);
    //     }
        
    return 0;
}