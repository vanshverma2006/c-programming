#include<stdio.h>

int main(){
    int amount ,total_bill=0;
    printf("Billing counter");
    while (1)//isme loop end depend kar raha hai -1 pe 
    {
        printf("\nenter the amount(-1 when finished) :: "); scanf("%d",&amount);
        if(amount== -1){
            break;
        }
        else if(amount<-1){
            printf("\ninvalid");
            continue;

        }
        else{
            total_bill+=amount;
        }
        
    }
    printf("\ntotal bill is :: %d",total_bill);
    

    return 0;
}