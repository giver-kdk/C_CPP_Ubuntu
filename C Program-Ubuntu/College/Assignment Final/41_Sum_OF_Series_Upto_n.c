/* Program to display sum of the following series up to n terms.
Sum = x - x2 + x3- x4+...*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int i, sign;
	float n, x, sum = 0;
	printf("Enter number of terms: ");
	scanf("%f", &n);
	printf("Enter value of x: ");
	scanf("%f", &x);
	for(i = 1; i <= n; i++)
	{
		sign = 1;
		if(i % 2 == 0)
		{
			sign = -1;
		}
		sum = sum + (sign * pow(x, i));
	}
	printf("Sum of the series is: %.3f", sum);
	getchar();
}