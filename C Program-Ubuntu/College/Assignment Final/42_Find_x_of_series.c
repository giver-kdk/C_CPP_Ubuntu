/* Program to find X of the following series for the given value of a and N.
X = a – a2/2 + a3/3 – a4/4..................up to N. */
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int sign, i;
	float x = 0, a, n;
	printf("Enter number of terms: ");
	scanf("%f", &n);
	printf("Enter the value of a: ");
	scanf("%f", &a);

	for(i = 1; i <= n; i++)
	{
		sign = 1;
		if(i % 2 == 0)
		{
			sign = -1;
		}
		x = x + (sign * (pow(a, i) / i));
	}
	printf("The value of x for the series is: %.3f", x);
	getchar();
}