#include<stdio.h>
int main(){
    // strings are also character arrays terminated by a  null character
    // null character :- \0
    char string[]={'v','a','n','s','h','\0'};
    // we can apply array methods in this 

    // short cut to make a string 
    char str[]="vansh";// when we use double qoutes c apne ap hi null character add kardega
    for(int i=0;i<5;i++){
        printf("%c",str[i]);
    }

    //shortcut
    printf("%s",str);//it will give full string
    // we can also use this with scanf
    
    return 0;
}