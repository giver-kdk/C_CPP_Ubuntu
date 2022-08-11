#include <stdio.h>
#include <math.h>

int recursion(int num, int rev)
{
	int remainder;
	if(num == 0)
	{
		return rev;
	}
	remainder = num % 10;
	return(recursion(num / 10, (rev * 10) + remainder));
}

int main()
{
	int number, reverse;
	printf("Enter a number to reverse: ");
	scanf("%d", &number);
	reverse = recursion(number, 0);
	printf("Original Number: %d\n", number);
	printf("Reversed Number: %d", reverse);
}