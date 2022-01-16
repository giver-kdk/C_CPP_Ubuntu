/* Write a program using switch statement to develop a simple calculator for +, -, *, /, and %
operators. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	int a, b, choice, result;
	char operation[20];
	printf("Enter any 2 numbers: ");
	scanf("%d%d",&a, &b);
	printf("Select your choice:\n1) Addition\t2) Subtraction\t3) Multiplication\t4) Division) \t5) Remainder\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			strcpy(operation, "Addition");
			result = a + b;
			break;
		case 2:
			strcpy(operation, "Subtraction");
			result = a - b;
			break;
		case 3:
			strcpy(operation, "Multiplication");
			result = a * b;
			break;
		case 4:
			strcpy(operation, "Division");
			result = a / b;
			break;
		case 5:
			strcpy(operation, "Remainder");
			result = a % b;
			break;
		default:
			printf("Invalid Choice");
			exit(0);
	}
	printf("%s of 2 numbers is %d", operation, result);
	getchar();
}