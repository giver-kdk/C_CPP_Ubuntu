#include <stdio.h>

int main()
{
	int i, a, b, c, fibo, num;
	a = 0; 
	b = 1;
	printf("Enter the number of terms of fibonacce series: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		printf("%d\t", a);
		c = a + b;
		a = b;
		b = c;
	}
}