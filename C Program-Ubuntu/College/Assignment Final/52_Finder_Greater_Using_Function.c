/* Program to find greater number between two numbers using function*/
#include <stdio.h>
#include <conio.h>

void greatest(int a, int b)
{
	int largest;
	if(a >= b)
	{
		largest = a;
	}
	else
	{
		largest = b;
	}
	printf("Largest number is: %d", largest);
}
int main()
{
	int a, b;
	printf("Enter any 2 numbers: ");
	scanf("%d%d", &a, &b);
	greatest(a, b);
	getchar();
}