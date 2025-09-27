#include<stdio.h>
void sum(int number){
    int rem, even_sum=0, odd_sum=0;
    while(number>0){// split the number and add even odd digits seperately
        rem=number%10;
        number=number/10;
            if(rem%2==0)
                even_sum+=rem;
            else
                odd_sum+=rem;
    }
    printf("\nThe sum of odd digits is : %d and even digits is : %d\n", odd_sum, even_sum);
}

void main(){
    int number;//get the number from the user
    printf("\nenter number: ");
    scanf(" %d", &number);
    sum(number);//pass it to the sum function
}
