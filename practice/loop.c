#include<stdio.h>
int main(){
/*
    	1.	Write a program to print numbers from 1 to 10 using a for loop.
*/

        //    int i;
        //    for(i=1;i<=10;i++){
        //     printf("%d\n",i);
        //    }

/*
        2.	Write a program to print the multiplication table of a 
        given number using a while loop.
*/
        // int i,n;
        // n=1;
        // printf("enter a num :: "); scanf("%d",&i);
        // while(n<=10){
        //     printf("%d X %d = %d\n",i,n,i*n);
        //     n++;
        // }
/*
    	3.	Print prime Numbers:
*/
        // int n,prime,nprime;
        // prime=0;
        // nprime=0;
        // printf("enter a num :: "); scanf("%d",&n);
        // for (int i = 2; i<n ; i++){
        //     if(n%i==0){
        //         prime+=1;
                
        //     }
        //     else{
        //         nprime+=1;
                
        //     }
        // }
        // if(prime>=1){
        //     printf("not prime");
        // }
        // else{
        //     printf("prime");
        // }
/*
        4.print multiplication table of 10 in reverse order
*/

        // for(int i=10;i>0;i--){
        //     printf("%d X %d = %d\n",10,i,10*i);
        // }

/*
        5.sum of first 10 natural num.
*/
    // using for loop
        // int i,sum;
        // sum=0;
        // for (i=1;i<=10;i++){
        //     sum+=i;
        // }
        // printf("%d",sum);

    //using while loop
        // int i,sum;
        // i=1; sum=0;
        // while(i<=10){
        //     sum+=i;
        //     i++;
        // }
        // printf("%d",sum);
    // using do-while loop
        // int i,sum;
        // i=1; sum=0;
        // do{
        //     sum+=i;
        //     i++;
        // }while(i<=10);
        // printf("%d",sum);

/*
        6. sum of all the numm that occure in multiplication table of 8
*/
    // int sum=0;
    // for (int i=1;i<=80;i++){
    //     if (i%8==0){
    //         sum+=i;
    //     }

    // }
    // printf("%d",sum);

/*
        7. factorial of a num
*/
    //using for loop
        // int n,factorial;
        // factorial=1;
        // printf("enter a num :: "); scanf("%d",&n);
        // for(int i=1;i<=n;i++){
        //     factorial*=i;

        // }
        // printf("%d",factorial);
    //using while loop
        // int n,factorial,i;
        // i=1;
        // factorial=1;
        // printf("enter a num :: "); scanf("%d",&n);
        // while(i<=n){
        //     factorial*=i;
        //     i++;
        // }
        // printf("%d",factorial);
    
    // using do-while loop
        // int n,factorial,i;
        // i=1;
        // factorial=1;
        // printf("enter a num :: "); scanf("%d",&n);
        // do{
        //     factorial*=i;
        //     i++;
        // }while(i<=n);
        // printf("%d",factorial);


//     int num, reverse = 0, remainder;

//     // Input the number
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Reverse the number
//     while (num != 0) {
//         remainder = num % 10;          // Get the last digit
//         reverse = reverse * 10 + remainder; // Append the digit to reverse
//         num = num / 10;               // Remove the last digit
//     }

//     // Print the reversed number
//     printf("Reversed Number: %d\n", reverse);

        /*
        count number of digits 
        */
       int n,totalNum=0;
       scanf("%d",&n);
       while(n>=1){    
        n=n/10;
        totalNum+=1;
       }
       printf("%d",totalNum);



       int a,totalNum=0;
       scanf("%d",&a);
       do{
        n=n/10;
        totalNum+=1;
       }while(n>=1);



    
        


    
    return 0;
}