/* Program to calculate sum of first 10 even number*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, sum = 0;
	for(i = 1, j = 1; j <= 10; i++)
	{
		if(i % 2 == 0)
		{
			sum = sum + i;
			j++;
		}
	}
	printf("Sum of 1st 10 even numbers is: %d", sum);
	getchar();
}