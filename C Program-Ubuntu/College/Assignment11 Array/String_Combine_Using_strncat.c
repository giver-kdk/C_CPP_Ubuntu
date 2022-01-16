/*This program combines specific number of string characters of second string to first string 
using strncat function*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char string1[50], string2[50], string[50];
    int num;
    printf("Enter first string: ");
    gets(string1);
    printf("Enter second string: ");
    gets(string2);
    printf("Enter the number of characters of 2nd string to combine: ");
    scanf("%d", &num);
    //Copy specific number of characters 
    strncat(string1, string2, num);
    puts(string1);
}