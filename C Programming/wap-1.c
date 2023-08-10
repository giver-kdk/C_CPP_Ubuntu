#include <stdio.h>

int fibo(int n)
{
	int i, first, second, result;
	for(i = 0; i < n; i++)
	{
		if(i <= 1) result = i;
		else
		{
			result = first + second;
			first = second;
			second = result;
		}
		printf("%d", result);
	}
}