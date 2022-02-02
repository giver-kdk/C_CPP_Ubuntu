/* Program to read all numbers from the input file “values.dat” and stores the average of these
numbers in an output file named as “average.res”.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float i, number, sum = 0, average;
    char string[30];
    // File Reading
    FILE *fp = fopen("values.dat", "rb");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Numbers in file:\n");
    for(i = 0; (fscanf(fp, "%f", &number)) != EOF; i++)
    {
        printf("%.0f\t", number);
        sum += number;
    }
    average = sum / i;                              
    printf("\nAverage value: %.3f\n", average);
    fclose(fp);
    // File Writing
    fp = fopen("average.res", "wb");   
    fprintf(fp, "%.3f", average);
    fclose(fp);
    printf("File stored Succesfully!");
    getchar();
}