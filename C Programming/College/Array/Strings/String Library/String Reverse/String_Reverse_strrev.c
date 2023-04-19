/*This program reverses the order of characters of actual string excluding null character.
NOTE: strrev function is used.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    printf("Enter your name");
    gets(name);

    strrev(name);               //Reverses the original string
    printf("The reverse name is: %s", name);
}