#include <stdio.h>

int factorial(int num);

int main()
{
	int num, fact;
	printf("Enter any number: ");
	scanf("%d", &num);
	fact = factorial(num);
	printf("Factorial of %d is %d", num, fact);
}
int factorial(int num)
{
	if(num == 0)
	{
		return 1;
	}
	else
	{
		return (num * factorial(num - 1));
	}
}