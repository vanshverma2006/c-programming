#include <stdio.h>
#include <string.h>
int main() {
    // int a,b;
    // scanf("%d",&a);
    // scanf("%d",&b);
    // if(a>b)
    // printf("a");
    // else
    // printf("b");
    // int age,weight;
    // scanf("%d",&age);
    // scanf("%d",&weight);
    // if(age>18 && weight>50){
    //     printf("you are eligible");
    // }else{
    //     printf("not eligible"); 
    // }
    // if(fork() && fork()){
    //     fork();
    //     printf("\nhello");
    // }
    // for (int i=6;i>0;i--){
    //     for(int j=i;j>0;j--){
    //         printf("*");
            
    //     }printf("\n");
    // }
    // for (int i=6;i>0;i--){
    //     for(int j=i;j>1;j--){
    //         printf("*");
            
    //     }printf("\n");
    // }
    // int month;
    // printf("Enter the month number (1-12): ");
    // scanf("%d", &month);
  
    // switch (month) {
    //     case 1:
    //         printf("January\n");
    //         break;
    //     case 2:
    //         printf("February\n");
    //         break;
    //     case 3:
    //         printf("March\n");
    //         break;
    //     case 4:
    //         printf("April\n");
    //         break;
    //     case 5:
    //         printf("May\n");
    //         break;
    //     case 6:
    //         printf("June\n");
    //         break;
    //     case 7:
    //         printf("July\n");
    //         break;
    //     case 8:
    //         printf("August\n");
    //         break;
    //     case 9:
    //         printf("September\n");
    //         break;
    //     case 10:
    //         printf("October\n");
    //         break;
    //     case 11:
    //         printf("November\n");
    //         break;
    //     case 12:
    //         printf("December\n");
    //         break;
    //     default:
    //         printf("Invalid month number! Please enter a number between 1 and 12.\n");
    // }
    // int a,b,n=1;
    // scanf("%d",&a);
    // scanf("%d",&b);
    // for (int i=0;i<b;i++){
    //    n*=a;
    // }
    // printf("%d",n);
  

    // char str[]="hello";
    // int len=strlen(str);
    // for(int i=len-1;i>=0;i--){
    //     printf("%c",str[i]);
    // }
    // int n;
    // puts("enter a value :");
    // scanf("%d",&n);
    
    // int array[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&array[i]);
    // }
    
    // int largest=array[0],secondLarest=array[0];
    // for (int i=0;i<n;i++){
    //     if (array[i]>largest){
    //         largest=array[i];
    //     }
    // }
    // for (int j=0;j<n;j++){
    //     if(array[j]>secondLarest&&array[j]!=largest){
    //         secondLarest=array[j];
    //     }
    // }
    // printf("%d %d",largest,secondLarest);
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    
    return 0;
}