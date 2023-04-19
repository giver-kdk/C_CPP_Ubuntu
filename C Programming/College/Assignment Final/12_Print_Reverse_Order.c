/* Program to print a six digit integer in reverse order.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, number, remainder, reverse = 0;
	printf("Enter a 6 digit number: ");
	scanf("%d", &number);
	for(i = 0; i < 6; i++)
	{
		remainder = number % 10;
		reverse = (reverse * 10) + remainder;
		number = number / 10;
	}
	printf("Reversed number is: %d", reverse);
	getchar();
}