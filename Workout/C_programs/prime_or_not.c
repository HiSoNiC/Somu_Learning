#include <stdio.h>

int main()
{
    //interger variables for getting input, for loop, flag for true condition
    int num, i, flag = 1;
    //print the instruction
    printf("Enter a positive number to check prime or not\n");
     //getting the number to be checked
    scanf("%d",&num);
    
    //check if the number is 1 or less than it.
    if(num<=1) {
        //if so, its not a prime
        printf("It is not a prime number.\n");
        //return out of program
        return 0;
    }
    
    //check if the number has any factor than 1
    else {
        (/*checking from 2 to half of the get number(after divide remainder equals zero or not), value more than half of 
        get number is greater than when 2 times of itself */
        for(i=2; i<=(num/2); i++) {
            if(num%2==0) {
                flag = 0;
                break;
            }
        }
    }
    
    if(flag == 1)
        printf("It is a prime number.\n");
    else
       printf("It is not a prime number.\n");
    
    return 0;
}
