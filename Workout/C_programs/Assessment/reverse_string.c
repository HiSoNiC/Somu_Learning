#include<stdio.h>

void main(){
    int length,iter;//iter for for loop iteration
    printf("Enter the string length: ");
    scanf(" %d", &length);
    char str[length];

    printf("\nEnter the string to reverse: ");
    scanf(" %[^\n]", str);//get the string with space until cursor enter to newline

    printf("The Reversed string: ");
    for(iter=0; str[iter]!='\0'; iter++);//finds the last element position

    for(iter-=1; iter>=0; iter--){//prints the element in the character array backwards
        printf("%c",str[iter]);
    }
    printf("\n");

}
