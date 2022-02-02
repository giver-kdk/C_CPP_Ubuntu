/*This program searches for substring inside a string and returns either base address
or NULL.*/
#include<stdio.h>
#include <string.h>
#include<conio.h>
void main()
{
    char string[30], substring[20];
    printf("\nInput your string:\t");
    gets(string);
    printf("\nInput substring you want to search:\t");
    gets(substring);
    if(strstr(string, substring) == NULL)
        printf("\nSubstring not found.");
    else
        printf("\nYour substring %s is contained in %s", substring, string);
        //Base addres of matched string in main string is returned
        printf("\n%u", strstr(string, substring));
    getchar();
}
