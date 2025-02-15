#include<stdio.h>
int main(){
/*
number of pairs whose is equal to given number x 
*/

    int n,x;
    puts("enter a value :");
    scanf("%d",&n);
    puts("enter value of x :");
    scanf("%d",x);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int count =0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i+j==x){
                count++;
            }
        }
    }
    printf("%d",count);


// agar triplet find karne hote to teen bar loop lagate 
    return 0;
}