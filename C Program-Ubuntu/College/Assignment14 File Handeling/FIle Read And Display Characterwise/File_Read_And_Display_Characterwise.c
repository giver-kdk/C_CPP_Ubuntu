/* Program to open a file, read its content one character at a time using fgetc() function and display it to screen*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int i;
    FILE *fp = fopen("Hello.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
}