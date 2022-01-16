/*This program creates file and stores data in it.*/
#include <stdio.h>                                 //All file related functions defined in <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;
    FILE *fp;                                       //Create a file pointer of structure type 'FILE'
    fp = fopen("Cprogram.txt", "w");                //Cprogram.txt is opened is write mode
    if(fp == NULL)                                  //If file creation fails, 'fopen' returns NULL 
    {
        printf("Error");
        exit(1);               
    }
    printf("Enter the Number: ");
    scanf("%d", &a);
    fprintf(fp, "%d", a);                           //Print/Store the data in file
    fclose(fp);                                     //Close file after opening
}