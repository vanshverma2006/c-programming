#include<stdio.h>

int main(){
    for (int i=0;i<6;i++){
        for (int j=0;j<i;j++){
            printf("%c",j+65);
        }printf("\n");
    }

    return 0;
}