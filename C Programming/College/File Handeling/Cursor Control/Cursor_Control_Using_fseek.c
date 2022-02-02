/*This progrma writes data in write from specific cursor location using fseek function*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char string[30];
    int num;
    fp = fopen("Cprogramming.txt", "r+");   //r+ mode allows read as well as write
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(string, 25, fp);                  //Stores file data into 'string'
    printf("Information of the file: %s\n", string);
    fseek(fp, 8, 0);                        //Sets cursor to specified position
    fputs("JAVA Program", fp);              //Data written from specified position
    rewind(fp);                             //Sets cursor to starting position
    fgets(string, 25, fp);                  
    printf("Changed information is: %s\n", string);
    num = ftell(fp);                        //Returns number of characters in pointed file
    printf("Size of file: %d", num);
    fclose(fp);
}