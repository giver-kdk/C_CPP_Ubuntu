/* Program to print the largest number among three numbers input by the user*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c, largest;
	printf("Enter any 3 numbers: ");
	scanf("%d%d%d", &a, &b, &c);

	if((a >= b) && (a >= c))
	{
		largest = a;
	}
	else if((b >= a) && (b >= c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	printf("Largest number is: %d", largest);
	getchar();
}