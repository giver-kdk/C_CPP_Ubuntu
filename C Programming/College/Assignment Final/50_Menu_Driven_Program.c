/* Write a program to display the following menu
a. To find area of circle
b. To check the given number is odd or even.
c. To find the sum of N numbers.
d. Exit.
Perform above task until the user wants to exit.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define PI 3.14159

void AreaOfCircle()
{
	float radius, area;
	printf("Enter radius of circle: ");
	scanf("%f", &radius);

	area = PI * (radius * radius);
	printf("The area if circle is: %.3f", area);
}

void CheckEvenOdd()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if(number % 2 == 0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}

void SumSeries()
{
	int num, sum = 0, i;
	printf("Enter any number: ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
	{
		sum = sum + i;
	}
	printf("Sum of %d numbers is: %d", num, sum);
}

int main()
{
	char choice;
	while(1)
	{
		printf("\nEnter you choice:\n");
		printf("1) Find Area of Circle\n2) Check Even or Odd\n3) Sum of N numbers\n4) Exit\n");
		fflush(stdin);
		scanf("%c", &choice);

		switch(choice)
		{
			case '1':
				AreaOfCircle();
				break;
			case '2':
				CheckEvenOdd();
				break;
			case '3':
				SumSeries();
				break;
			case '4':
				exit(0);
			default:
				printf("Invalid Choice\n");
		}
	}
	getchar();
}