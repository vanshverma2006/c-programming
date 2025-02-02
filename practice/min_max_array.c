#include<stdio.h>
int main(){

    // first approach
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
            if(array[i][j]<least){
                least=array[i][j];
            }
        }
    }
    printf("%d",largest);
    printf("\n%d",least);



// efficient method 
        int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int array[n][n];

    // Input elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter value of array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Initialize largest and least
    int largest = array[0][0], least = array[0][0];
    int largest_i = 0, largest_j = 0; // Store indices of the largest number

    // Finding largest and least in a single loop
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
                largest_i = i;
                largest_j = j;
            }
            if (array[i][j] < least) {
                least = array[i][j];
            }
        }
    }

    // Print results
    printf("Largest: %d at array[%d][%d]\n", largest, largest_i, largest_j);
    printf("Least: %d\n", least);


    return 0;
}