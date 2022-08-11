/* Program to create a file and write some text to it one character at a time using fputc() function until user hits the enter key*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp = fopen("Hello.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //'getchar' takes character input from keyboard
    //Loop breaks if input is new line(i.e; Pressed Enter)
    while((ch = getchar()) != '\n')             
    {   
        fputc(ch, fp);             //Store the input character in file
    }
    fclose(fp);
}