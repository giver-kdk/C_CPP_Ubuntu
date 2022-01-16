/* Program that calculates the sequence 1/1! + 2/2! + 3/3! +.....+ n/n!, Where n is the number of input by the user.*/
#include <stdio.h>
#include <conio.h>

int factorial(int a)
{
	int i, fact = 1;
	for(i = 1; i <= a; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	float i, n, sum = 0;
	printf("Enter value of n: ");
	scanf("%f", &n);
	for(i = 1; i <= n; i++)
	{
		sum = sum + (i / factorial(i));
	}
	printf("Sum of sequence is: %.3f", sum);
	getchar();
}