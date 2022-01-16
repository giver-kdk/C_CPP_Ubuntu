/*  Create a structure student having data members name, roll-number and percentage. 
Complete the program to display the name of student having percentage greater than or equal to 60.*/
#include <stdio.h>
#define NUM 3
struct student
{
	char name[20];
	int roll_num;
	float percentage;
}stu[NUM];

int main()
{
	int i;

	printf("Enter students detail:\n");
	for(i = 0; i < NUM; i++)
	{
		printf("Enter name: ");
		fflush(stdin);
		gets(stu[i].name);
		printf("Enter roll number: ");
		scanf("%d", &stu[i].roll_num);
		printf("Enter percentage: ");
		scanf("%f", &stu[i].percentage);
	}
	printf("Students with percentage >= 60 %% are:\n6");
	for(i = 0; i < NUM; i++)
	{
		if(stu[i].percentage >= 60)
		{
			printf("Name: %s\n", stu[i].name);
		}
	}
}
