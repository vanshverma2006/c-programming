#include<stdio.h>
 void inputArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("enter value of %d : ",i+1);
        scanf("%d",&array[i]);
    
 }
 }

//  void avgOfNum(int array[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//     sum+=array[i];
//     }
//     printf("\navg :: %d",sum/n);
//  }
// void sort(int array[],int n){
//     for (int i=0;i<n-1;i++){
//         for (int j=i+1;j<n;j++){
//             if(array[i]>array[j]){
//                 int temp;
//                 temp=array[i];
//                 array[i]=array[j];
//                 array[j]=temp;

//             }
//         }
//     }

// }
// void insert(int array[],int n,int ins,int insEl){
//     for(int i=0;i<=n;i++){
//         if (i==ins){
//             for(int i=0;i<n;i++){
//                 for (int j=i+1;j<=n;j++){
//                 int temp;
                    
//                 temp=array[i];
//                 array[i]=array[j];
//                 array[j]=temp;
//                 }
//             }
//         }
//     }
// }
// void del(int array[], int n, int place) {
//     if (place < 0 || place >= n) {
//         printf("Invalid position\n");
//         return;
//     }

//     for (int i = place; i < n - 1; i++) {
//         array[i] = array[i + 1]; // Shift elements left
//     }

//     printf("Updated array: ");
//     for (int i = 0; i < n - 1; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }


// void reverse(int array[],int n){
//     for (int i=0;i<n;i++){
//         printf("%d",array[i]);
//     }
//     printf("\n");
//     for(int i=n-1;i>=0;i--){
//         printf("%d",array[i]);
//     }
// }
void even_odd(int array[],int n){
    int even =0 ,odd =0;
    for (int i=0;i<n;i++){
        if (array[i]%2==0){
            even ++;
        }
        else{
            odd ++ ;
        }
    }
    int evenArray[even],oddArray[odd];
    int evenindex=0,oddindex=0;
    for (int i=0;i<n;i++){
        if (array[i]%2==0){
           evenArray[evenindex]=array[i];
           evenindex++;
        }
        else{
            oddArray[oddindex]=array[i];
            oddindex++ ;
        }
    }
}
void linerSearch(int array[],int n,int element){
    for (int i=0;i<n;i++){
        if(array[i]==element){ printf("\nfound at index : %d",i);
        break;}
        else printf("\nfinding");
            
        
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    inputArray(array,n);
    // puts("");
    // int place;
    // scanf("%d",&place);
    
    // insert(array,n,ins,insEl);
    // avgOfNum(array,n);
    // printf("length is : %d",len(array));
    
    // sort(array,n);
    
    // printf("\nlargest %d",array[n-1]);
    // printf("\nsecond largest %d",array[n-2]);
    // del(array,n,place);
    // reverse(array,n);
    // even_odd(array,n);
    int element;
    scanf("%d",&element);
    linerSearch(array,n,element);
    return 0;
}