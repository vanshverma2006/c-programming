#include<stdio.h>
int change(int a)
{
a = 77;
return a;
}
int main(){  
    int b=22,result;
    result=change(b) ;
    // The value of b remains 22
    printf("b is %d", b);
    printf("\n%d",result);
    return 0;

}