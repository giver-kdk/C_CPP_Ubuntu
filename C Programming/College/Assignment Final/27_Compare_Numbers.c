/* Program to compare two numbers.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	if(a > b)
	{
		printf("%d is greater than %d", a, b);
	}
	else if(a < b)
	{
		printf("%d is greater than %d", b, a);
	}
	else
	{
		printf("Both numbers are equal");
	}
	getchar();
}