/* Program to sum the digits of a positive integer which is 5 digits long.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, number, remainder, sum = 0;
	printf("Enter a 5 digit number: ");
	scanf("%d", &number);
	for(i = 0; i < 5; i++)
	{
		remainder = number % 10;
		sum = sum + remainder;
		number = number / 10;
	}
	printf("Sum of digits of number is: %d", sum);
	getchar();
}