//factorial
// #include <stdio.h>
// int factorial(int n){
    
//     if(n==0||n==1){
//         return 1;
//     }else{
//         return (n)*factorial(n-1);
//     }

// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",factorial(n));

//     return 0;
// }



//natural no. sum
// #include <stdio.h>
// int summ(int n){
    
//     if(n==0){
//         return 0;
//     }else{
//         return (n)+summ(n-1);
//     }

// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",summ(n));

//     return 0;
// }3




#include <stdio.h>

int sumDigits(int n)
    {
        if(n==0)
        return 0;
        
    else

     return (n%10)+sumDigits(n/10);
        
        
    
    }
    
int main()
{
    int a;
    scanf("%d",&a);
    int result=sumDigits(a);
printf("%d",result);
    return 0;
}