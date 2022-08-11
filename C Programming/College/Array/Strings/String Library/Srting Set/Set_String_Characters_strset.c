/*This program sets all characters of string to specific character using strset function.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char ch, string[50];
    printf("Enter any string: ");
    gets(string);
    printf("Enter the character to set: ");
    scanf(" %c", &ch);
    strset(string, ch);         //Replaces all characters of string with 'ch'
    puts(string);
}