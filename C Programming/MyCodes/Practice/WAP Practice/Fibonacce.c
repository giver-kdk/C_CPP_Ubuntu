#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int i, num, a = 0, b = 1, c, d;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	printf("%d\t", a);
	while(c <= num)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d\t", a);
	}
}