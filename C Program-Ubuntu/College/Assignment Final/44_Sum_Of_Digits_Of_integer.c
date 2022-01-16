/* Program that computes the sum of the digits of the given integer number.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, number, remainder, sum = 0;
	printf("Enter a 5 digit number: ");
	scanf("%d", &number);

	while(number != 0)
	{
		remainder = number % 10;
		sum = sum + remainder;
		number = number / 10;
	}
	printf("Sum of digits of number is: %d", sum);
	getchar();
}