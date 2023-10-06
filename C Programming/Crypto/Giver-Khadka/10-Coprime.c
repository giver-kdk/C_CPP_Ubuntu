// Program to check if two numebrs are relatively prime or not 
#include <stdio.h>

int gcd(int a, int b)
{
	if(a == 0) return b;
	else if(b == 0) return a;
	else
	{
		while(b != 0)
		{
			int r = a % b;
			a = b;
			b = r;
		}
		return a;
	}
}
int main()
{
    int n1, n2;
    
	for(int i = 0; i < 3; i++)
	{
		printf("Enter two positive integers: ");
		scanf("%d %d",&n1,&n2);
		// GCD needs to be 1 for being co-prime
		if(gcd(n1, n2) == 1) printf("\nNumbers are Co-Prime");
		else printf("\nNumbers are not Co-Prime");
		printf("\n");
	}
	printf("\nName: Giver Khadka");
	printf("\nRoll No: 05\n");
    return 0;
}