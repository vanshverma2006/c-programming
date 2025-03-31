#include <stdio.h>
void sorting(int array[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (array[i]>array[j]){
                int temp=array[i];  
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
int main()
{
    int n ;
    scanf("%d",&n);
    
    return 0;
}