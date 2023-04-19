/* . program using function to calculate and return sum of following series up to n terms; where
x and n are supposed as passed by main program; sum = x-x2 +x3-x4+..…*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int SumSeries(int n, int x)
{
	int i, sign;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sign = 1;
		if(i % 2 == 0)
		{
			sign = -1;
		}
		sum = sum + (sign * pow(x, i));
	}
	return sum;
}

int main()
{
	float n, x, sum;
	printf("Enter number of terms: ");
	scanf("%f", &n);
	printf("Enter value of x: ");
	scanf("%f", &x);
	sum = SumSeries(n, x);
	printf("Sum of the series is %.3f", sum);
	getchar();
}