#include <stdio.h>

int main()
{
	int i, num, a = 0, b = 1, c;
	printf("Enter the number of terms: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		printf("%d    ", a);
		c = a + b;
		a = b;
		b = c;
	}
}