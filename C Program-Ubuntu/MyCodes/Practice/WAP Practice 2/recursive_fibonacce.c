#include <stdio.h>

int fibonacce(int num)
{
	if(num == 0)
	{
		return 1;
	}
	if(num == 1)
	{
		return 2;
	}
	else
	{
		return(fibonacce(num - 1) + fibonacce(num - 2));
	}
}

int main()
{
	int i, number, fibo;
	printf("Enter the number of terms:");
	scanf("%d", &number);
	for(i = 0; i < number; i++)
	{
		printf("%d    ", fibonacce(i));
	}
	// printf("%d", fibonacce(number));
}