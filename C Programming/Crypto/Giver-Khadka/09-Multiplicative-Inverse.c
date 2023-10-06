#include <stdio.h>
// GCD using  Extended Euclidean Method
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

int mul_inverse(int a, int m)
{
	int x, y;
	int gcd = ext_euc(a, m, &x, &y);
	if (gcd != 1)
	{
		printf("%d is not invertible modulo %d\n", a, m);
		return -1;
	}
	return (x % m + m) % m;
}

int main()
{
	int a, m;
	for (int i = 0; i < 3; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &a);
		printf("Enter a modulus: ");
		scanf("%d", &m);
		int inv = mul_inverse(a, m);
		if (inv != -1) printf("Multiplicative inverse of %d mod %d is %d\n", a, m, inv);
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
	return 0;
}