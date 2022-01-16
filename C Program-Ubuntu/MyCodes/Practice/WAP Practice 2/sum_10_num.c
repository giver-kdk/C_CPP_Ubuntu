#include <stdio.h>

int main()
{
	int i, num = 10, sum = 0;
	for(i = 1; i <= 10; i++)
	{
		sum = sum + i;
	}
	printf("Sum of 10 natural numbers: %d", sum);
}