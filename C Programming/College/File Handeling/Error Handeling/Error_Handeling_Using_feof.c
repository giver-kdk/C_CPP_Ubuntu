/*This program tells whether a file is successfully read till EOF or not using feof and ferror function*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char string[10];
    fp = fopen("Cprogram.txt", "r");                //Open file in read mode
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(string, 10, fp);                          //Store file data into 'string'
    printf("Reading content of the file: %s",string);
    if(feof(fp) != 0)                               //'feof' returns non zero value when EOF reached 
    {
        printf("END OF THE FILE.\n");
    }
    if(ferror(fp) == 0)                             //'ferror' returns 0 when no error found during file reading and writing
    {
        printf("FILE SUCCESSFULLY READ.\n");
    }
    fclose(fp);
}