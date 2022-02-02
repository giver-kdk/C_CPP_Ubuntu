/* Program to find square root of a given number.*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float number, squareRoot;
	printf("Enter any number: ");
	scanf("%f", &number);

	squareRoot = sqrt(number);
	printf("Square of number is: %.3f", squareRoot);
	getchar();
}