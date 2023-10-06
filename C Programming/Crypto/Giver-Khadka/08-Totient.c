#include <stdio.h>
 
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
 
int main()
{
    int n;
	for (int i = 0; i < 3; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &n);

		printf("totient(%d) = %d\n", n, totient(n));
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
    return 0;
}