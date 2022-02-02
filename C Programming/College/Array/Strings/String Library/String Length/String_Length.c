/*This program prints the number of character in string using strlen function*/
#include <stdio.h>
#include <string.h>

int main()
{
    int length;
    char anything[100];
    printf("Type anything u want: ");
    gets(anything);
    
    length = strlen(anything);          //'strlen' function counts number of characters
    printf("You entered %d characters.", length);
}