/* Program to open a file and copy all its content to another file*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[30];
    FILE *fp = fopen("File1.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(string, 30, fp);          //Store file data in string
    fclose(fp);
    fp = fopen("File2.txt", "w");   
    fputs(string, fp);              //Store string in file
    fclose(fp);
}