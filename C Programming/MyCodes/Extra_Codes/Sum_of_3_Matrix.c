#include <stdio.h>
int main()
{
	int a[2][2], b[2][2], c[2][2], s[2][2], i, j, k;
	//first matrix
	printf("Enter a first element of matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//second matrix
	printf("Enter a second element of matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	//third matrix
	printf("Enter a third element of matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &c[i][j]);
		}
	}
	//adding
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			s[i][j] = a[i][j] + b[i][j] + c[i][j];
		}
	}
	printf("The sum of 3  matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
