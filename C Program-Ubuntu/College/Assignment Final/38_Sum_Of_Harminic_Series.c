/* Program to determine the sum of the harmonic series (1+ 1/2 + 1/3 + 1/4 + ... + 1/n) for a given value of n.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float i, num, sum = 0;
	printf("Enter any number: ");
	scanf("%f", &num);
	for(i = 1; i <= num; i++)
	{
		sum = sum + (1 / i);
	}
	printf("Sum of harmonic series is: %.3f", sum);
	getchar();
}