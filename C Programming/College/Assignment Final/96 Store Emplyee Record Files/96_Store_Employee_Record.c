/* Create a file named “employee.dat”. Write a program to store records of N employee in a
file. These records contain name, identification number, office name, and occupation of the
employee. Also display name of those employees whose office name is “Everest Bank” and
occupation is "Manager”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct employee
{
	char name[50];
	int id_num;
	char office_name[50];
	char occupation[50];
}emp;

int main()
{
	int i, num;
	printf("Enter the number of employees: ");
	scanf("%d", &num);
    // File Writing
    FILE *fp = fopen("employee.dat", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter Employee Details:\n");

	for(i = 0; i < num; i++)
	{
		fflush(stdin);
		printf("Name of Employee %d: ", i + 1);
		scanf("%s", emp.name);
		printf("Identification Number: ");
		scanf("%d", &emp.id_num);
		fflush(stdin);
		printf("Office Name: ");
		gets(emp.office_name);
		fflush(stdin);
		printf("Occupation: ");
		gets(emp.occupation);
		fwrite(&emp, sizeof(emp), 1, fp);
	}
    fclose(fp);
	// File Reading
	fp = fopen("employee.dat", "r");
	printf("Managers of Everest Bank are:\n");
    while((fread(&emp, sizeof(emp), 1, fp)) != 0)
    {
		if(strcmp(emp.office_name, "Everest Bank") == 0)
		{
			if(strcmp(emp.occupation, "Manager") == 0)
			{
				printf("\nEmployee Name: %s\n", emp.name);
				printf("Identification Number: %d\n", emp.id_num);
				printf("Office Name: %s\n", emp.office_name);
				printf("Occupation: %s\n", emp.occupation);
			}
		}
    }
    fclose(fp);
	getchar();
}