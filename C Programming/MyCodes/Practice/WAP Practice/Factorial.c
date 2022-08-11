#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// #include <graphics.h>

int main()
{
	int num, factorial = 1, i;
	printf("Enter any number: ");
	scanf("%d", &num);
	for(i = num; i > 0; i--)
	{
		factorial = factorial * i;
	}
	printf("Factorial of %d is: %d", num, factorial);
}