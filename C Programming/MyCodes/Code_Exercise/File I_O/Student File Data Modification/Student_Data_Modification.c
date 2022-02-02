/* WAP to store information of 5 students in students.dat file and display the data of 2nd student in the file.
	Also change the name of 4th student to "Myrcella" in the students.dat file and display. */
#include <stdio.h>
#include <string.h>
#define NUM 5

struct student
{
	char name[20];
	int roll;
	int marks;
}std[NUM], stu, forthStu;

int main()
{
	int i;
	// Student Data Input
	FILE *fp1 = fopen("students.dat", "w");
	printf("Enter students detail:\n");
	for(i = 0; i < NUM; i++)
	{
		printf("For Student %d\n", i + 1);
		printf("Name: ");
		fflush(stdin);
		gets(std[i].name);
		printf("Roll Number: ");
		scanf("%d", &std[i].roll);
		printf("Marks: ");
		scanf("%d", &std[i].marks);
		fwrite(&std[i], sizeof(std[i]), 1, fp1);
	}
	fclose(fp1);
	// Print details of 2nd Student
	fp1 = fopen("students.dat", "r");
	for(i = 0; i < NUM; i++)
	{
		fread(&stu, sizeof(stu), 1, fp1);
		if(i == 1)
		{
			printf("Details of Student %d is:\n", i + 1);
			printf("Name: %s\n", std[i].name);
			printf("Roll Number: %d\n", std[i].roll);
			printf("Marks: %d\n", std[i].marks);
		}
	}
	fclose(fp1);
	// Create temp.dat file to store data temporarily
	FILE *fp2 = fopen("temp.dat", "w");
	fp1 = fopen("students.dat", "r");
	// Replace name of 4th student with "Myrcella"
	for(i = 0; i < NUM; i++)
	{
		fread(&stu, sizeof(stu), 1, fp1);
		if(i == 3)
		{
			strcpy(stu.name, "Myrcella");
			fwrite(&stu, sizeof(stu), 1, fp2);			
		}
		else
		{
			fwrite(&stu, sizeof(stu), 1, fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	// Copy temp.dat information into students.dat
	fp1 = fopen("students.dat", "w");
	fp2 = fopen("temp.dat", "r");
	for(i = 0; i < NUM; i++)
	{
		fread(&stu, sizeof(stu), 1, fp2);
		fwrite(&stu, sizeof(stu), 1, fp1);
	}
	fclose(fp1);
	fclose(fp2);
	// Delete temporary file
	remove("temp.dat");
	// Print Modified Data in students.dat
	printf("Students Data after Modification of 4th student:\n");
	fp1 = fopen("students.dat", "r");
	for(i = 0; i < NUM; i++)
	{
		fread(&stu, sizeof(stu), 1, fp1);
		printf("Details of Student %d is:\n", i + 1);
		printf("Name: %s\n", stu.name);
		printf("Roll Number: %d\n", stu.roll);
		printf("Marks: %d\n", stu.marks);
	}
	fclose(fp1);
}