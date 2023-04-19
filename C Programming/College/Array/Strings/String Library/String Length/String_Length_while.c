/*This program counts the lenght/number of characters in string using while loop*/
#include <stdio.h>

int main()
{
    int i = 0, count = 0;
    char name[100];
    printf("Type your name: ");
    gets(name);
    //Count until null character reached
    while(name[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Your name has %d characters.", count);
}