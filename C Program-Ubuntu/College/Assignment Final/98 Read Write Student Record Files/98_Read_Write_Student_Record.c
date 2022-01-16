/* Write a program to open a file named “student.txt” to keep the records of students (roll_no,
name, course, and semester) in a write mode and perform the following operations:
a. Insert records in to the file.
b. Display all those records for which course is B.Sc.IT and semester is 2.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct student
{
	char name[50];
	int roll_num;
	char course[20];
	int semester;
}std;

int main()
{
	int i, num;
	printf("Enter the number of Students: ");
	scanf("%d", &num);
    // File Writing
    FILE *fp = fopen("student.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter students Details:\n");

	for(i = 0; i < num; i++)
	{
		fflush(stdin);
		printf("Name of Student %d: ", i + 1);
		scanf("%s", std.name);
		printf("Roll Number: ");
		scanf("%d", &std.roll_num);
		fflush(stdin);
		printf("Course: ");
		gets(std.course);
		printf("Semester: ");
		scanf("%d", &std.semester);
		fwrite(&std, sizeof(std), 1, fp);
	}
    fclose(fp);
	// File Reading
	fp = fopen("student.txt", "r");
	printf("2nd Semester students of B.Sc.It :\n");
    while((fread(&std, sizeof(std), 1, fp)) != 0)
    {
		if(strcmp(std.course, "B.Sc.IT") == 0)
		{
			if(std.semester == 2)
			{
				printf("\nStudent Name: %s\n", std.name);
				printf("Roll Number: %d\n", std.roll_num);
				printf("Course: %s\n", std.course);
				printf("Semester: %d\n", std.semester);
			}
		}
    }
    fclose(fp);
	getchar();
}