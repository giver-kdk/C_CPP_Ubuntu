/* This program calculates maximum among two numbers, using a parameterized macro. It additionally displays the warning: 
"You are using a C++ Compiler to compile this file." if the program is being compiled using a C++ compiler instead of C Compiler. */

#include <stdio.h>

#define MAXIMUM(x, y) (x > y ? x : y)

int main()
{
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("The maximum number is %d\n", MAXIMUM(num1, num2));
	#ifdef __cplusplus														// Tells if C++ compiler is used
	{
		printf("You are using a C++ Compiler to compile this file.");
	}
	#else
	{
		printf("You are using a C Compiler to compile this file.");
	}
	#endif

}