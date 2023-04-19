/*This program stores integer data to file and extracts it to variable*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *fp;
    int number, i;
    fp = fopen("Integer.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //Put/Store integer type data in pointed file
    for(i = 0; i <= 10; i++)
    {
        putw(i, fp);        //'i' is integer data for file
    }
    fclose(fp);
    fp = fopen("Integer.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //Extract integer from pointed file to 'number' and print
    while((number = getw(fp)) != EOF)
    {
        printf("%d\t", number);
    }
    fclose(fp);
    getchar();
}