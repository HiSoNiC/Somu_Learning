#include<stdio.h>

void main(){
    int char_length;
    printf("Enter the length of the string: ");
    scanf(" %d", &char_length);
    //initialize the character array with length of user input
    char string[char_length];

    printf("\nEnter the string: ");
    //gets the string with spaces from user until sees a newline
    scanf(" %[^\n]",string);
    printf("\n");
        for (int i=0; string[i]!='\0'; i++){
            if(string[i]>=48 && string[i]<=57);//check and do nothing if the character is digit by comparing \
            with ASCII values.

            else//print the character if it is not a digit
                printf("%c",string[i]);
        }
        printf("\n");
}
