#include<stdio.h>
int main(){
    /*
    break mai loop exit ho jata hai
    */
    for(int i=0;i<=15;i++){
        if(i==10){
            break;// exit the loop
        }
        printf("the value of i is :: %d\n",i);
    }

    /*
    continue mai vo particular iteration skip ho jati hai
    */
    for(int x=0;x<=15;x++){
        if (x==5){
            continue;// skip the iteration
        }
         printf("the value of i is :: %d\n",x);
    }
    return 0;
}