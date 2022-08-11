#include <stdio.h>

int find_GCD(int x, int y)
{
	if(y != 0)
	{
		return(find_GCD(y, x % y));
	}
	else
	{
		return(x);
	}
}
int main()
{
	int a, b, result;
	printf("Enter a and b: ");
	scanf("%d%d", &a, &b);
	printf("GCD of two numbre is %d", find_GCD(a, b));
}