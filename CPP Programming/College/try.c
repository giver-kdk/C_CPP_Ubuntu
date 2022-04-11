#include <stdio.h>

int i = 5;

int main()
{
	printf("%d\n", i);
	{
		int i = 10;
		printf("%d\n", i);
	}
}