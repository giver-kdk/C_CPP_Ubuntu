/* Program to obtain the first 25 numbers of Fibonacci series.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, num = 25, a = 0, b = 1, c = 1;

	for(i = 0; i < num; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%d\t", a);
	}
	getchar();
}