/* Program to add, subtract, multiply, and divide two whole numbers.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b, add, sub, mul, div;

	printf("Enter 1st number: ");
	scanf("%f", &a);
	printf("Enter 2nd number: ");
	scanf("%f", &b);

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("Sum: %.3f\n", add);
	printf("Difference: %.3f\n", sub);
	printf("Multiplication: %.3f\n", mul);
	printf("Division: %.3f", div);
	getchar();
}