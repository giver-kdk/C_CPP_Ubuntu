#include <math.h>
#include <stdio.h>

int pow1(int a, int b)
{
	int result = 1;
	while (b != 0) {
        result *= a;
        --b;
    }
	return result;
}
// Power function to return value of a ^ b mod P
long long int power(long long int a, long long int b,
					long long int P)
{
	if (b == 1) return a;
	else return (((long long int)pow1(a, b)) % P);
}

int main()
{
	long long int P, G, x, a, y, b, ka, kb;
	// Use P = 23; 
	printf("Enter value of P: ");
	scanf("%lld", &P);
	// Use G = 9; 
	printf("Enter value of G: ");
	scanf("%lld", &G);
	// Use a = 4; 
	printf("Enter private key 'a' chosen by Alice: ");
	scanf("%lld", &a);
	x = power(G, a, P); 
	// Use b = 3; 
	printf("Enter private key 'b' chosen by Bob: ");
	scanf("%lld", &b);
	y = power(G, b, P); // gets the generated key
	// Generating the secret key after the exchange of keys
	ka = power(y, a, P); 
	kb = power(x, b, P); 

	printf("\nSecret key for the Alice is : %lld", ka);
	printf("\nSecret Key for the Bob is : %lld", kb);
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
	return 0;
}
