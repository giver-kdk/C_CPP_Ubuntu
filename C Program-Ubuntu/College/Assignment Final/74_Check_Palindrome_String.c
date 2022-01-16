/* Program to check whether a given string is a palindrome or not.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int difference;
    char string[50], temp_string[50];

    printf("Enter any string to check Palindrome: ");
    gets(string);
    
    strcpy(temp_string, string);
    strrev(string);
    difference= strcmp(strlwr(temp_string), strlwr(string));
    if(difference == 0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }
    getchar();
}