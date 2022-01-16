/* Program to find sum of first n natural numbers using recursive function.*/
#include <stdio.h>
#include <conio.h>

int SumNumber(int num)
{
	if(num == 1)
	{
		return 1;
	}
	return (num + SumNumber(num - 1));
}
int main()
{
	int num, sum;
	printf("Enter a number: ");
	scanf("%d", &num);
	sum = SumNumber(num);
	printf("Sum of first %d natural numbers is: %d", num, sum);
	getchar();
}