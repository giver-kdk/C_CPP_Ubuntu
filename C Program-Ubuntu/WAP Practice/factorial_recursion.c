#include <stdio.h>

int find_factorial(int num)
{
	if(num == 1)
	{
		return 1;
	}
	else
	{
		return (num * find_factorial(num - 1));
	}
}

int main()
{
	int num, fact;
	printf("Enter any number: ");
	scanf("%d", &num);
	fact = find_factorial(num);
	printf("The factorial of the number is %d", fact);
}