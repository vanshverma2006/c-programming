#include<stdio.h>
#include <stdlib.h>
#include <time.h>
    
int main(){
    /*
    1.	Sum of Elements: 
        Write a program to calculate the sum of all elements in an array.
    */
            // int sum[5],total=0;
            // for (int i=0;i<5;i++){
            //     printf("enter value %d\n:: ",i+1);
            //     scanf("%d",&sum[i]);
            // }
            // for (int i =0;i<5;i++){
            //     total+=sum[i];
            // }
            // printf("sum :: %d",total);
            // return 0;
    
    /*
    2.	Find Maximum and Minimum: 
        Write a program to find the maximum and minimum elements in an array.
    */
        // my way :-(it will not work in -ve cases)
            // int sort[5],max=0;
            // for(int i=0;i<5;i++){
            //     printf("enter value %d\n:: ",i+1);
            //     scanf("%d",&sort[i]);
            // }
            // for(int i=0;i<5;i++){
            //     if(sort[i]>=max)
            //         max=sort[i];
            // }
            // int min=max;
            // for(int i=0;i<5;i++){
            //     if(sort[i]<=min)
            //     min=sort[i];
            // }
            // printf("%d",max);
            // printf("%d",min);
        
        // correct way(work in all cases)
            


            // int sort[5];

            // // Input array values
            // for (int i = 0; i < 5; i++) {
            //     printf("Enter value %d: ", i + 1);
            //     scanf("%d", &sort[i]);
            // }

            // // Initialize max and min with the first element
            // int max = sort[0];
            // int min = sort[0];

            // // Find maximum and minimum values
            // for (int i = 0; i < 5; i++) {
            //     if (sort[i] > max) {
            //         max = sort[i];
            //     }
            //     if (sort[i] < min) {
            //         min = sort[i];
            //     }
            // }

            // // Output the results
            // printf("Maximum: %d\n", max);
            // printf("Minimum: %d\n", min);


    /*
    3.	Reverse Array: 
        Write a program to reverse the elements of an array.
    */

            // int n;
            // printf("enter the no. of elements :: "); scanf("%d",&n);
            // int reverse[n];
            // for (int i=0;i<n;i++){
            //     printf("Enter value %d: ", i + 1);
            //     scanf("%d", &reverse[i]);
            // }
            // for (int i=n-1;i>=0;i--){
            //     printf("%d",reverse[i]);
            // }

    /*
    	4.	Linear Search: 
            Write a program to search for a specific element in an array using linear search.
    */
            // int n;

            // // Input the size of the array
            // printf("Enter the size of the array: ");
            // scanf("%d", &n);

            // int arr[n];

            // // Seed the random number generator
            // srand(time(0));

            // // Generate random array elements
            // printf("Generated Random Array:\n");
            // for (int i = 0; i < n; i++) {
            //     arr[i] = rand() % 100;  // Random numbers between 0 and 99
            //     printf("%d ", arr[i]);
            // }

            // int linearsearch,found=0;
            // printf("enter the num you want to find :: \n");
            // scanf("%d",&linearsearch);
            // for(int i=0;i<n;i++){
            //     if (arr[i]==linearsearch){
            //     printf("found !! at %d place\n",i+1);

            //     found+=1;
                
            //         break;
            //     }else{
            //         printf("finding !!\n");
            //     }

            // }
            // if(found!=1){
            //     printf("the element is not present !!");
            // }
    
    /*
        5. count occurances 
    */
    
            // int n;
            // printf("Enter the number of elements: ");
            // scanf("%d", &n);

            // int array[n];
            // int processed[n];  // To keep track of elements already counted

            // // Initialize the processed array to 0 (false)
            // for (int i = 0; i < n; i++) {
            //     processed[i] = 0;
            // }

            // // Input the elements
            // for (int i = 0; i < n; i++) {
            //     printf("Enter element %d: ", i + 1);
            //     scanf("%d", &array[i]);
            // }

            // // Count occurrences of each element
            // for (int i = 0; i < n; i++) {
            //     if (processed[i] == 1) {
            //         continue;  // Skip already processed elements
            //     }
                
            //     int count = 1;  // Start counting for the current element
            //     for (int j = i + 1; j < n; j++) {
            //         if (array[i] == array[j]) {
            //             count++;
            //             processed[j] = 1;  // Mark the duplicate element as processed
            //         }
            //     }
                
            //     if (count > 1) {
            //         printf("%d is repeated %d time(s)\n", array[i], count);
            //     }
            //}
            
             

            return 0;

            
    

}