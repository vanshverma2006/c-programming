#include<stdio.h>
#include<string.h>
int main(){
    struct book {
        char name[50];
        int price ;
        int numOfPages;


    }book1,book2;
    strcpy(book1.name[50],"soloLeveling");
    book1.price=1000;
    book1.numOfPages=500;

    return 0;
}