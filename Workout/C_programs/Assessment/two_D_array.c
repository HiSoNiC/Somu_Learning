#include<stdio.h>
void main(){
    //initializes the 2D-array statically for size 2 x 2
    int two_D_array[2][2];
    printf("Enter the array elements( total: 4 ):\n");
        for(int i =0,j; i<2; i++){
            for(j=0; j<2; j++){
                //prompt the user to enter the elements
                printf("\nposition of array[%d][%d]: ",i,j);
                //get the array element as integer
                scanf(" %d", &two_D_array[i][j]);
            }
        }
    printf("\nSum of 1st row: %d", (two_D_array[0][0] + two_D_array[0][1]));
    printf("\nSum of 2nd row: %d", (two_D_array[1][0] + two_D_array[1][1]));
    printf("\nSum of 1st column: %d", (two_D_array[0][0] + two_D_array[1][0]));
    printf("\nSum of 2nd column: %d\n", (two_D_array[0][1] + two_D_array[1][1]));
}
