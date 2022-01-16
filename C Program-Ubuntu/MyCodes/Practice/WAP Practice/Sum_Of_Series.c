/*Prints sum 1.1! + 2.2! + 3.3! + ....n.n!*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>
int find_factorial(int number);
int main()
{
	int num, sum = 0, i;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		sum = sum + (i * find_factorial(i));
	}
	printf("%d", sum);
}
int find_factorial(int number)
{
	int i, factorial = 1;
	for(i = number; i > 0; i--)
	{
		factorial = factorial * i;
	}
	return(factorial);
}