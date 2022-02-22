/* A leap year should meet the following condition:
a) For non-century years it should be exactly divisible by 4.
b) For century years it should be exactly divisible 400.
Write a program to check a year for leap. */
#include <stdio.h>

int main()
{
	int year, remainder = 0;
	printf("Enter the year: ");
	scanf("%d", &year);

	if(year % 100 == 0)
	{
		remainder = year % 400;
	}
	else
	{
		remainder = year % 4;
	}
	if(remainder == 0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Non-Leap Year");
	}
	getchar();
}