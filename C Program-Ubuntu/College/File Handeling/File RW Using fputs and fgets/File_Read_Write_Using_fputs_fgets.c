/*This program stores data in file and extracts specified amount of data from file using fputs and fgets*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char name[20];
    fp = fopen("Name.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fputs("Giver Khadka", fp);   //Puts string to pointed file
    fclose(fp);
    printf("Output ");
    fp = fopen("Name.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //Store 6 characters from file into 'name' including '\0'
    fgets(name, 6, fp);         
    printf("Name: %s", name);
    fclose(fp);
}