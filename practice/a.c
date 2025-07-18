#include<stdio.h>
void inputArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("enter value of %d : ",i+1);
        scanf("%d",&array[i]);
    }
}
void printArray(int array[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}
// void reverseArray(int array[],int n){

//     inputArray(array,n);
//     int temp[n];
//     for (int i = n-1 ;i>=0;i--){
//         temp[n-i-1]=array[i];
//     }
//     for (int i=0;i<n;i++){
//         array[i]=temp[i];
//     }
    
// }
// void kShift(int array[],int n,int k){
//     inputArray(array,n);
//     int temp = n-k;
//     int newArray[temp];
//     for (int i=0 ;i<temp; i++){
//         newArray[i]= array[i];
//     }

    
// }
// int spiralArr(int n,int m,int arr[][m]){
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);

//         }
    
//     }
// }
void mulArray(int arr1[],int arr2[],int n){
    for (int i=0;i<n;i++){
        arr1[i]=arr1[i]*arr2[i];
    }
}
int main(){
    int n;
    
    scanf("%d",&n);
    int arr1[n],arr2[n];
    inputArray(arr1,n);
    inputArray(arr2,n);
    mulArray(arr1,arr2,n);
    printArray(arr1,n);

    // int arr[n][n];
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for (int i=0;i<n;i++){
    //     int sum =0;
    //     for (int j=0;j<n;j++){
    //         sum += arr[i][j];
    //     }
    //     printf("\n%d",sum);
    // }
    //  for (int i=0;i<n;i++){
    //     int sum =0;
    //     for (int j=0;j<n;j++){
    //         sum += arr[j][i];
    //     }
    //     printf("\n%d",sum);
    // }
// int sum2=0;
//     for (int i=0;i<n;i++){
        
//         for (int j=0;j<n;j++){
//             sum2 += arr[i][j];
//         }
        
//     }
//     printf("%d",sum2);


// int sumd=0;
//     for (int i=0;i<n;i++){
        
//         for (int j=0;j<n;j++){
//             if (i==j){
//             sumd += arr[i][j];
//             }
//         }
        
//     }
//     printf("%d",sumd);

    // int s=0;
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++){
    //         if (arr[i][j]==arr[j][i]){
    //             s++;
    //         }
    //     }
    // }
    // if (s==n*n){
    //     printf("symm");
    // }
    
    return 0;
}