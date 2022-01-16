#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

struct course
{
	char name[20];
	char code[20];
	float credit_hour;
}c1[5];
int main()
{
	int i;
	printf("Enter the course detail:\n");
	for(i = 0; i < 5; i++)
	{
		printf("For course %d\n", i+ 1);
		printf("Enter course name: ");
		scanf("%s", c1[i].name);
		printf("Enter course code: ");
		scanf("%s", c1[i].code);
		printf("Enter credit hours: ");
		scanf("%f", &c1[i].credit_hour);
	}
	printf("The courses with credit hours greater than 3 are:\n");
	for(i = 0; i < 5; i++)
	{
		if(c1[i].credit_hour > 3)
		{
			printf("Course name: %s\n", c1[i].name);
			printf("Course code: %s\n", c1[i].code);
			printf("Credit Hours: %f\n", c1[i].credit_hour);
		}
	}
}