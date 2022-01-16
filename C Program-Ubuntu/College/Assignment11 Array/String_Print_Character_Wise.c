/*This program prints string by incrementing character-wise*/
#include <stdio.h>
#include <conio.h>
void main()
{
    char c[13]="CProgramming";
    int i;
    printf("\n\n\n");
    printf("--------------\n");
    for(i = 0; c[i] != '\0'; i++)       //Increments 'i' upto length of string
    {   //Here, * means number
        printf("|%-12.*s|\n", i + 1, c);        //No. of string characters controlled by 'i + 1'
    }
    printf("--------------\n");
}