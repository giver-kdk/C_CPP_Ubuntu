#include <stdio.h>

int fibonacce(int num)
{
	if(num == 1)
	{
		return 0;
	}
	else if(num == 2)
	{
		return 1;
	}
	else
	{
		return (fibonacce(num - 1) + fibonacce(num - 2));
	}
}

int main()
{
	int i, num, fibo;
	printf("Enter any number: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		printf("%d\t", fibonacce(i));
	}
}