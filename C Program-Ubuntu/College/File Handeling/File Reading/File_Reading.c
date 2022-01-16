/*This program allows to create a file, write the file and read the file characterwise.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    //If file doesn't exist. Then, 'fopen' returns NULL in read mode
    FILE *fp = fopen("Cprogram.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //ch = getchar() takes character input & loop exits if input is EOF(Ctrl + Z)
    while((ch = getchar()) != EOF)   
    {   //Put the input character into the file
        putc(ch, fp);                   
    }
    fclose(fp);                     //Close file after opening

    fp = fopen("Cprogram.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //ch = getc(fp) stores character from file to 'ch' & loop exits when EOF reached
    while((ch = getc(fp)) != EOF)    
    {   //Print stored character
        printf("%c", ch);               
    }
    fclose(fp);
}