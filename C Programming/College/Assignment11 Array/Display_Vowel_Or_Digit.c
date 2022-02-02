/*This is a program that reads character and perform following operation according to the choice inputted by the user.
Displays “it is vowel” if entered character is vowel otherwise “it is consonant”.
Displays “it is digit” if entered character is member of digit, otherwise display the ASCII value of entered character.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    //Check for alphabet
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))   //ASCII range for alphabets
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("It is vowel");
        }
        else
        {
            printf("It is consonant");
        }
    }
    //Check for number
    else if(ch >= 48 && ch <= 57)       //ASCII value range for numbers
    {
        printf("It is digit");
    }
    else
    {
        printf("ASCII value of character is: %d", ch);
    }
}