/* Write a program that creates a file named “employee.dat” to keep the records of N
employees of a company and print the records in the ascending order of the employee_id. A
typical employee record will be employee id, name, designation, and salary.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct employee
{
	char name[50];
	int employee_id;
	char designation[50];
	float salary;
}emp;

int main()
{
	int i, j, num, id[100] = {0}, temp;
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
		scanf("%d", &emp.employee_id);
		// Store ID for sorting
		id[i] = emp.employee_id;					

		fflush(stdin);
		printf("Office Name: ");
		gets(emp.designation);
		printf("Salary: ");
		scanf("%f", &emp.salary);
		fwrite(&emp, sizeof(emp), 1, fp);
	}
    fclose(fp);
	// Sort Employee ID Array in Ascending
	for(i = 0; i < num; i++)
	{
		for(j = 0; j < num - i - 1; j++)
		{
			if(id[j] > id[j + 1])
			{
				temp = id[j];
				id[j] = id[j + 1];
				id[j + 1] = temp;
			}
		}
	}
	// File Reading
	fp = fopen("employee.dat", "r");
	printf("Employees sorted according to ID number:\n");
	i = 0;
    while(i < num)
    {
		if((fread(&emp, sizeof(emp), 1, fp)) == 0)
		{
			fseek(fp, 0, 0);
		}
		// Print detail according to sorted ID number
		if(id[i] == emp.employee_id)
		{
			printf("\nEmployee Name: %s\n", emp.name);
			printf("Identification Number: %d\n", emp.employee_id);
			printf("Designation: %s\n", emp.designation);
			printf("Salary: %.3f\n", emp.salary);
			i++;								// ID counter
		}
    }
    fclose(fp);
	getchar();
}