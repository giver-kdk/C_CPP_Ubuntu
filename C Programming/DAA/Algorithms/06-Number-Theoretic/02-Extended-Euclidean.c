// GCD using  Extended Euclidean Method
#include <stdio.h>
int ext_euc(int a, int b, int *x, int *y)
{
	if (b == 0)
	{
		*x = 1;
		*y = 0;
		return a;
	}
	int x1, y1;
	int gcd = ext_euc(b, a % b, &x1, &y1);
	*x = y1;
	*y = x1 - (a / b) * y1;
	return gcd;
}

int main()
{
	int a, m, x, y;
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Enter a modulus: ");
	scanf("%d", &m);
	int gcd = ext_euc(a, m, &x, &y);
	printf("Value of x: %d\n", x);
	printf("Value of y: %d\n", y);
	printf("GCD of %d mod %d using Extended Euclidean: %d\n", a, m, gcd);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
	return 0;
}