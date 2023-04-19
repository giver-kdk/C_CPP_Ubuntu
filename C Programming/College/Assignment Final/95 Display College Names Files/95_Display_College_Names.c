/* Create a file named “university.dat”. Write a program to keep the records on N colleges
under Pokhara University in a file. These records contain name, location, and
no_of_faculties of the college and display the names of colleges in Kathmandu location.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct college
{
	char name[50];
	char location[20];
	int no_of_faculties;
}clz;

int main()
{
	int i, num;
	printf("Enter the number of colleges: ");
	scanf("%d", &num);
    // File Writing
    FILE *fp = fopen("university.dat", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter College Details:\n");

	for(i = 0; i < num; i++)
	{
		fflush(stdin);
		printf("Name of College %d: ", i + 1);
		gets(clz.name);
		fflush(stdin);
		printf("Location: ");
		gets(clz.location);
		printf("Number of Faulties: ");
		scanf("%d", &clz.no_of_faculties);
		fwrite(&clz, sizeof(clz), 1, fp);
	}
    fclose(fp);
	// File Reading
	fp = fopen("university.dat", "r");
	printf("Colleges Located in Kathmandu:\n");
    while((fread(&clz, sizeof(clz), 1, fp)) != 0)
    {
		if(strcmp(clz.location, "Kathmandu") == 0)
		{
			printf("\nCollege Name: %s\n", clz.name);
			printf("Location: %s\n", clz.location);
			printf("Number of Faculties: %d\n", clz.no_of_faculties);
		}
    }
    fclose(fp);
	getchar();
}