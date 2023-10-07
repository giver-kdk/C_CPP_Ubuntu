#include <stdio.h>
 
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
 
int main()
{
    int n ;
	printf("Enter a number: ");
	scanf("%d", &n);
    printf("The Factorial of %d is %d", n, factorial(n));
	printf("\nName: Giver Khadka\tRoll No: 05\n");
    return 0;
}