#include <stdio.h>
#define NUM 3

struct course
{
	char name[20];
	char code[20];
	float credit_hour;
}crc[NUM];

int main()
{
	int i;
	printf("Enter course details:\n");
	for(i = 0; i < NUM; i++)
	{
		printf("Enter name: ");
		fflush(stdin);
		gets(crc[i].name);
		printf("Enter code: ");
		fflush(stdin);
		gets(crc[i].code);
		printf("Enter credit hours: ");
		scanf("%f", &crc[i].credit_hour);
	}
	printf("Course with credit hours more than 3:\n");
	for(i = 0; i < NUM; i++)
	{
		if(crc[i].credit_hour > 3)
		{
			printf("Name: %s\n", crc[i].name);
			printf("Code: %s\n", crc[i].code);
			printf("Credit hours: %.3f\n", crc[i].credit_hour);
		}
	}
}