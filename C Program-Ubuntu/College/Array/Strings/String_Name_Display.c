/*This program prints the string using scanf and puts*/
#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter your name: ");
    //NOTE: '&' not required for string in scanf
    scanf("%s", name);              //Ignores characters after whitespace

    printf("Your name is : ");
    puts(name);
}