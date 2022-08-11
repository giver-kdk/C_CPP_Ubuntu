/*This program checks whether the entered string is Palindrome or not without using  string  functions.*/
#include <stdio.h>

int main()
{   
    int i, j, length;
    char string[50], rev_string[50];
    //Input String
    printf("Enter any string: ");
    gets(string);
    //Count String Length
    for(i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    //Get Reversed String
    for(i = 0, j = length - 1; i < length; i++, j--)
    {
        rev_string[i] = string[j];   //Last character assigned to 1st place
    }
    rev_string[i] = '\0';           //Convert to actual string
    i = 0;
    //Compare Reversed and Original Strings
    while(rev_string[i] == string[i] && rev_string[i] != '\0' && string[i] != '\0')
    {
        i++;
    }
    if(rev_string[i] == '\0' && string[i] == '\0')
    {
        printf("\nPalindrome");         //Palindrome if both strings are same
    }
    else
    {
        printf("\nNot Palindrome");
    }
}