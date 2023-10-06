#include <stdio.h>
#include<stdlib.h> 

int totient(int n)
{
    int result = n; 
    // Logic for n(1 - 1/p)(1 - 1/q)...
    for (int p = 2; p * p <= n; ++p) {
        // Check if p is a prime factor.
        if (n % p == 0) {
            // If yes, then update n and result
            while (n % p == 0)
            {n /= p;}
            result = result - result / p;
        }
    }
	// Also consider single powered prime factor
    if (n > 1) result = result - result / n;
    return result;
}
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
// modular exponentiation without overflow
int modulo(int base, int exponent, int mod)
{
    int x = 1;
    int y = base;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            x = (x * y) % mod;
        y = (y * y) % mod;
        exponent = exponent / 2;
    }
	if((x % mod) < 0) return (mod + (x % mod));
	else return x % mod;
}
int main()
{
	for(int k = 0; k < 3; k++)
	{

		// Integer Array can store value > ASCII range
		int cipher[50];
		int i, n, p, q, t, x, y, d = 1, e = 2;
		char message[50], encrypt[50], decrypt[50];
        fflush(stdin); 		// Use 17 and 11
		printf("Enter your message: ");
		gets(message);
		// Capitalize and convert into Z-26 form
		for (i = 0; i < strlen(message); i++) {
			message[i] = toupper(message[i]) - 65;
		}
		printf("Enter prime numbers p and q: ");
		scanf("%d%d", &p, &q);
		n = p * q;
		t = totient(n);
		while(ext_euc(e, t, &x, &y) != 1)
		{e++;}
		while(((e * d) % t) != 1)
		{d++;}

		printf("\nEncrypted Message is: ");
		for(i = 0; i < strlen(message); i++)
		{
			// Do mod with 128 for ASCII range
			cipher[i] = modulo(message[i], e, n);
			encrypt[i] = (modulo(message[i], e, n) + 65) % 128;
			printf("%c", encrypt[i]);
		}
		encrypt[i] = '\0';
		printf("\n");

		printf("\nDecrypted Message is: ");
		for(i = 0; i < strlen(encrypt); i++)
		{
			// Do mod with 128 for ASCII range
			decrypt[i] = (modulo(cipher[i], d, n) + 65);
			printf("%c", decrypt[i]);
		}
		decrypt[i] = '\0';
		printf("\n");
	}

}