#include <stdio.h>

int main()
{
	int number, i, sum = 0;
	printf("Enter the value of n: ");
	scanf("%d", &number);
	for(i = 1; i <= number; i++)
	{
		sum = sum + i;
	}
	printf("Sum of N natural numbers is: %d\n", sum);
}