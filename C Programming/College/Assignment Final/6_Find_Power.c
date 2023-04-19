/* Program to find power of a given number.*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	double number, power, result;
	printf("Enter any number: ");
	scanf("%lf", &number);
	printf("Enter the power: ");
	scanf("%lf", &power);

	result = pow(number, power);
	printf("Power of number is: %.3lf", result);
	getchar();
}