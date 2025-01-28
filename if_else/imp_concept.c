#include<stdio.h>
int main(){
    int a;
    a=10;
    if(a=11){
        printf("hello");
    }else{
        printf("bye");
    }
    // ans will be hello not bye 
    /*
    why this thing happen if ke ek statement likhi hai true ho sakti hai to if vali statement print hogi
    a=11 hai not a==11 

    so agar if ke koi statement likhi ho jo true hai to if run hoga not else
     */

    return 0;
}