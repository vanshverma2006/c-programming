#include<stdio.h>
int main(){
   int array[3][3],row,col,player_num,tic_tac_toe[3][3];

    for (int i=0;i<9;i++){
        printf("enter player num :: ");
        scanf("%d",&player_num);
        printf("enter row :: ");
        scanf("%d",&row);
        printf("enter col :: ");
        scanf("%d",&col);
        // printf("\nenter the value of array[%d][%d]",row,col);
        // scanf("%d",&array[row][col]);
        // printf("\nthe value you entered is %d",array[row][col]);
        if (player_num==0){
            array[row][col]=0;
        }
        else{
            array[row][col]=1;
        }
        // printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\t",array[0][0],array[0][1],array[0][2],array[1][0],array[1][1],array[1][2],array[2][0],array[2][1],array[2][2]);
        printf("%d",array[row][col]);

    
    }

    return 0;
}