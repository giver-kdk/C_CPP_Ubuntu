/*This program opens the file named test.txt, read its content and display it to screen */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char string[50];
    FILE *fp = fopen("test.txt", "r");          //Open file in read mode
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(string, 30, fp);                      //Stores 30 characters from file in 'string'
    printf("Information of file: %s", string);
    fclose(fp);
}