/*This program stores data in variable, send to a file and again stores the data from the file to the variable*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int roll_num;
    char name[20];
    fp = fopen("Student.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter the roll number: ");
    scanf("%d", &roll_num);
    printf("Enter the name: ");
    scanf("%s", name);
    //Print/Store data(roll_num, name) in pointed file 
    fprintf(fp, "%d %s", roll_num, name);
    // fprintf(fp, "Hello World");              //This is also allowed
    fclose(fp);
    fp = fopen("Student.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //Store data from file to 'roll_num' and 'name'
    fscanf(fp, "%d %s", &roll_num, name);
    printf("Roll number: %d\n", roll_num);
    printf("Name: %s", name);
    fclose(fp);
}