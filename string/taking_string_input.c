#include<stdio.h>
int main(){
    char input[5];
    scanf("%s",input);//no need to use & in this
    // if we use scanf it will take only first word matlab agar space agya to age read nahi hoga 
    printf("%s",input); //or we can use puts 
    puts(input);
    /*
    we can only input single words by this method
    */
   
    return 0;
}