/*This program opens the file named test.txt and adds to it the text “@TU” */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char string[50];
    FILE *fp = fopen("test.txt", "r");          //Open file in read mode to read and display current data
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(string, 30, fp);
    printf("Current File Info: %s\n", string);
    fclose(fp);

    fp = fopen("test.txt", "a");                //Open file in append mode to add data
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fprintf(fp, "@TU");
    fclose(fp);

    fp = fopen("test.txt", "r");                
    fgets(string, 30, fp);
    printf("Modified File Info: %s", string);
    fclose(fp);
}