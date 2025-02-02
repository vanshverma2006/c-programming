#include <stdio.h>

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
    //     n*=a;
    // }
    // printf("%d",n);
    int n;
    printf("enter a num :: ");
    scanf("%d",&n);
    int array[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("enter value of array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    int largest,least ;
    largest = array[0][0];
    least=array[0][0];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]>largest){
                largest=array[i][j];
            }
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]>=largest){
                largest=array[i][j];
                printf("array[%d][%d]\n",i,j);
                break;
            }
        }
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]<least){
                least=array[i][j];
            }
        }
    }
    printf("%d",largest);
    printf("\n%d",least);





    return 0;
}