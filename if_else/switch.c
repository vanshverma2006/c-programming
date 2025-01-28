#include<stdio.h>
int main(){
    int a;
    printf("enter a num ::"); scanf("%d",&a);
    // koi  bhi case match hua to vo and usse age vale sare case print ho jayenge 
    // default vala to har bar hi print hoga 
    switch(a){
        case 1:
        printf("hello1");
        case 23:
        printf("hello23");
        // agar hum kahi break karna chahte hai 
        case 342:
        printf("break");
        break;

        default: // ye to hamesha hi execute hoga 
        printf("end");
    }
    return 0;
}
