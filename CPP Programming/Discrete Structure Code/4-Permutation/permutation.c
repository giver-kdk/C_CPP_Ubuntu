// Program to find the number of ordered arrangemnt without repetition using permutation
#include <stdio.h>

int factorial(int num);

int main()
{
	int n, r, arrangements;
	printf("Enter the number of element: ");
	scanf("%d", &n);
	printf("Enter the number of elements to be arranged: ");
	scanf("%d", &r);
	arrangements = factorial(n) / factorial(n - r);
	printf("Possible number of ordered arrangement without repetition: %d \n", arrangements);
}
int factorial(int num)
{
	int fact = 1;
	for(int i = 1; i <= num; i++ )
	{
		fact = fact * i;
	}
	return fact;
}