/*This program uses tolower and toupper functions from ctype.h to convert uppercase and lowercaes*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter uppercase character: ");
    scanf(" %c", &ch);
    printf("%c\n", tolower(ch));
    
    printf("Enter lowercase character: ");
    scanf(" %c", &ch);
    printf("%c\n", toupper(ch));
}