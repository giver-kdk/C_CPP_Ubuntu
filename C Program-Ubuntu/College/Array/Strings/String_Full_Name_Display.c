/*This program prints the string using gets and puts*/
#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    gets(name);            //Also Reads characters after whitespace
    printf("Your full name is : ");
    puts(name);
}