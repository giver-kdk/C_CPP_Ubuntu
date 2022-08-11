#include <stdio.h>
#define NUMBERS 10

int main()
{
	int i = 1, sum = 0, count = 0;
	while(count != NUMBERS)
	{
		if(i % 2 != 0)
		{
			sum = sum + i;
			count++;
		}
		i++;
	}
	printf("Sum of 1st %d odd numbers: %d", NUMBERS, sum);
}