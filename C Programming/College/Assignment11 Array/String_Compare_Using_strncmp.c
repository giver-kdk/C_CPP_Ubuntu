/*This program compares specific number of string using strncmp function*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char first_str[25],second_str[30];
    int n;
    printf("\nInput first string:\t");
    gets(first_str);
    printf("\nInput second string:\t");
    gets(second_str);

    n = strncmp(first_str, second_str, 5);        //Compares 5 strings and returns ASCII difference

    printf("%d", n);
    getchar();
}
