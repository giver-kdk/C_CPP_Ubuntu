/*This program uses memset function to set n characters of string to specific character*/
#include <mem.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    char string[]="Hello World";
    int i;
    printf("Before memset:%s\n", string);
    printf("After memset:%s\n", memset(string,'*',10));          //Sets 10 characters of string to '*'
    for(i=0;i<12;i++)
        printf("%d ",string[i]);                                //Prints ASCII value of characters in string
    getchar();
}
