#include<stdio.h>
/* why we use unction prototype:-->
    * function prototype is not always necessary 
    * we make function prototype if we call function before giving it a definition
    * if we define function before calling it their is no need of function prototype
*/
// eg:-->
int sum(int a,int b);
int main(){
    int a,b,ans;
    printf("enter the value of a :: "); scanf("%d",&a);
    printf("enter the value of b :: "); scanf("%d",&b);
    ans=sum(a,b); // we haven't defined function but called it 
    printf("\n%d",ans);
    return 0;
}
    // here we define function:-->
    int sum(int a,int b){
        return a+b;
    }