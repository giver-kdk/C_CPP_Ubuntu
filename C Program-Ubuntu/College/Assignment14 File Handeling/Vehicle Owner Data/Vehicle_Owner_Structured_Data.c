/*This program defines a structure for Vehicle Owner having data members name, address, telephone number, vehicle number and license number. 
Take the data for ten owners, write them in file “Own.txt”. Read the data from the file and display them.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1

struct owner
{
    char name[20];
    char address[20];
    long int tele_num;
    long int vehicle_num;
    long int license_num;
}v_own[SIZE];

int main()
{
    int i;
    char ch;
    FILE *fp = fopen("Own.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter the Vehicle Owners Detail:\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("For owner %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", v_own[i].name);
        printf("Enter Addres: ");
        scanf("%s", v_own[i].address);
        printf("Enter Telephone Number: ");
        scanf("%ld", &v_own[i].tele_num);
        printf("Enter Vehicle Number: ");
        scanf("%ld", &v_own[i].vehicle_num);
        printf("Enter License Number: ");
        scanf("%ld", &v_own[i].license_num);

        fprintf(fp, "Name:             %s\n", v_own[i].name);
        fprintf(fp, "Address:          %s\n", v_own[i].address);
        fprintf(fp, "Telephone Number: %ld\n", v_own[i].tele_num);
        fprintf(fp, "Vehicle Number:   %ld\n", v_own[i].vehicle_num);
        fprintf(fp, "License Number:   %ld\n", v_own[i].license_num);
    }
    fclose(fp);    
    fp = fopen("Own.txt", "r");
    printf("\nDetail in the file:\n");
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}