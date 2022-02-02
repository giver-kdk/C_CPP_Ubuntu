/*This program counts the lenght/number of vowel characters in string using while loop*/
#include <stdio.h>

int main()
{
    int i = 0, count = 0;
    char name[100];
    printf("Type your name: ");
    gets(name);
    while(name[i] != '\0')
    {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || 
           name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
        i++;
    }
    printf("Your name has %d vowel characters.", count);
}