#include <stdio.h>
#include <math.h>

int main()
{
	float a = 5.6;
	int b, c;
	b = ceil(a);					// Ceil function rounds off float into higher integer form
	c = floor(a);					// Floor function rounds off float into lower integer form
	printf("Ceiling of a: %d\n", b);
	printf("Floor of a: %d\n", c);
	return 0;
}