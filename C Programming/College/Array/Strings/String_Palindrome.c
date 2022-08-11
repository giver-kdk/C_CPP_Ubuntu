#include <stdio.h>
#include <string.h>

int main()
{
    int difference;
    char string[50], temp_string[50];

    printf("Enter any string to check Palindrome: ");
    gets(string);
    
    strcpy(temp_string, string);
    strrev(string);
    difference= strcmp(temp_string, string);
    if(difference == 0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }

}