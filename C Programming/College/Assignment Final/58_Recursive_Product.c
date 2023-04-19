/* Program to find product of first n natural numbers using recursive function.*/
#include <stdio.h>
#include <conio.h>

int FindProduct(int num)
{
	if(num == 1)
	{
		return 1;
	}
	return (num * FindProduct(num - 1));
}
int main()
{
	int num, product;
	printf("Enter a number: ");
	scanf("%d", &num);
	product = FindProduct(num);
	printf("Product of first %d natural numbers is: %d", num, product);
	getchar();
}