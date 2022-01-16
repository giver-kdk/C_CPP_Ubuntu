/* Program to check whether a number is even or odd*/
#include <stdio.h>
#include <conio.h>

int main()
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
	getchar();
}