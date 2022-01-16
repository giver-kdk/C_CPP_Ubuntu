/* Program to read 100 students record with following fields and display the record of B.Sc. IT
faculty only.
Roll No. 		Name 		Faculty 		DOB(date of birth
											dd		mm		yy */
#include <stdio.h>
#include <string.h>
#include <conio.h>

#define NUM 100

struct student
{
	char name[20];
	int roll_no;
	char faculty[20];
	struct dob
	{
		int day;
		int month;
		int year;
	}birth;
}std[NUM];

int main()
{
	int i, j;
	printf("Enter student details:\n");
	for(i = 0; i < NUM; i++)
	{
		printf("Student %d Name: ", i + 1);
		scanf("%s", std[i].name);
		printf("Roll Number: ", i + 1);
		scanf("%d", &std[i].roll_no);
		printf("Faculty: ", i + 1);
		scanf("%s", std[i].faculty);
		printf("Date of Birth (dd mm yyyy): ", i + 1);
		scanf("%d%d%d", &std[i].birth.day, &std[i].birth.month, &std[i].birth.year);
	}
	printf("Records of B.Sc.IT are:\n");
	for(i = 0; i < NUM; i++)
	{
		if(strcmp(std[i].faculty, "B.Sc.IT") == 0)
		{
			printf("\nName: %s\n", std[i].name);
			printf("Roll Number: %d\n", std[i].roll_no);
			printf("Faculty: %s\n", std[i].faculty);
			printf("Date of Birth: %d-%d-%d\n", std[i].birth.day, std[i].birth.month, std[i].birth.year);
		}
	}
	getchar();
}