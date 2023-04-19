/*This program prints given string in required format*/
#include <stdio.h>
#include <conio.h>

void main()
{
    char s[]="Nepal";
    printf("\n%s", s);
    printf("\n%c", s[4]);
    //Print string first. Cursor moves to beginning of line and overwrites 1st character
    printf("\n%s\r%c", s, s[4]); 
    getchar();
}
