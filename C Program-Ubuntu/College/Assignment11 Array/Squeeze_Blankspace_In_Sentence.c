/*This is a program which will read a line and squeeze out all blanks from it
and output the line with no blanks.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, j;
    char string[50], temp[50];
    printf("Write any sentence:\n");
    gets(string);
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == ' ')
        {   //Shift all the strings to left by 1 units if blank space is encountered
            for(j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j + 1];
            }
        }
    }
    puts(string);
}