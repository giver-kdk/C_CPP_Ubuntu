/* Given an integer, write a program to reverse and print it*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, number, remainder, reverse = 0;
	printf("Enter a integer number: ");
	scanf("%d", &number);
	while(number != 0)
	{
		remainder = number % 10;
		reverse = (reverse * 10) + remainder;
		number = number / 10;
	}
	printf("Reversed number is: %d", reverse);
	getchar();
} 