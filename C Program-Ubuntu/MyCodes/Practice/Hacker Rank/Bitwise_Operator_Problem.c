/* This program takes a and b as input and compares all the values of bitwise and, bitwise or and bitwise xor of possible combinations.
Then prints the maximum value obtained from and, or and xor respectively.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) 
{
	int i, j,  a, b, max_and = 0, max_or = 0, max_xor = 0;
	// printf("a b\tand\tor\txor\n");
	for(i = 1; i < n ; i++)															// For loop to get possible combinations of a and b
	{
		for(j = 1; i + j <= n; j++)
		{
			a = i;
			b = i + j;
			// printf("%d %d\t%d\t%d\t%d\n", a, b, a & b, a | b, a ^ b);			// Checks the possible combinations and outputs
			if(((a & b) > max_and) && (a & b) < k)
			{
				max_and = a & b;													// Only set the maximum value to 'max_and' which is < k 
			}
			if(((a | b) > max_or) && (a | b) < k)
			{
				max_or = a | b;
			}
			if(((a ^ b) > max_xor) && (a ^ b) < k)
			{
				max_xor = a ^ b;
			}
			
		}
	}
	printf("%d", max_and);
	printf("\n%d", max_or);
	printf("\n%d", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
