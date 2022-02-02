/*This program searches a specific character in a string and returns either
address of found character in string or NULL.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char ch, string[50];
    printf("Enter a string: ");
    gets(string);
    printf("Enter a character to search: ");
    scanf(" %c", &ch);
    if(strchr(string, ch) == NULL)      //'strchr' returns NULL if character not found
    {
        printf("%c character was not found in string", ch);
    }
    else
    {
        printf("%c character was found in string", ch);
        printf("\nAddress of character in string is %u", strchr(string, ch));
    }
}