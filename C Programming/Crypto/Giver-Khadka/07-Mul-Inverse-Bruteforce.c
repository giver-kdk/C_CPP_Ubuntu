// Check a number is multiplicative inverse of another using brute force 
#include <stdio.h>

int main()
{
	for(int i = 0; i < 3; i++)
	{
		int n, m = 1, mod;
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("Enter the modulus: ");
		scanf("%d", &mod);
		// Using Bruteforce
		while(((n * m) % mod) != 1)
		{m++;}
		printf("The multiplicative inverse is: %d\n", m);
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
}