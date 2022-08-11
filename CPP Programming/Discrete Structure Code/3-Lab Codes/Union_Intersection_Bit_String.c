// C program to find union and intersection of two sets using bit string representation
#include <stdio.h>
#define SIZE 10
int main()
{
	int i, k = 0, j, t;
	int U[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int A[SIZE] = {1, 3, 4, 5, 7};
	int B[SIZE] = {1, 2, 4, 6, 8, 10};
	int SA[SIZE];
	int SB[SIZE];
	int US[SIZE];
	int CS[SIZE];
	int DS[SIZE];
	int C[SIZE];
	int D[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		if (U[i] != -1)
		{
			US[i] = 1;
		}
	}
	printf("The bit string representation of universal set\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", US[i]);
	}
	printf("\n");
	// finding bit string for set A
	for (i = 0; i < SIZE; i++)
	{
		t = 0;
		for (j = 0; j < SIZE; j++)
		{
			if (A[j] == U[i])
			{
				t = 1;
				break;
			}
		}
		if (t == 1)
		{
			SA[i] = 1;
		}
		else
		{
			SA[i] = 0;
		}
	}
	printf("The bit string representation of set A\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", SA[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		t = 0;
		for (j = 0; j < SIZE; j++)
		{
			if (B[j] == U[i])
			{
				t = 1;
				break;
			}
		}
		if (t == 1)
		{
			SB[i] = 1;
		}
		else
		{
			SB[i] = 0;
		}
	}
	// finding bit string representation for set B
	printf("The bit string representation of set B\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", SB[i]);
	}
	printf("\n");
	// computing union
	for (i = 0; i < SIZE; i++)
	{
		if (SA[i] == 1 || SB[i] == 1)
		{
			CS[i] = 1;
		}
		else
		{
			CS[i] = 0;
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		if (CS[i] == 1)
		{
			C[k++] = U[i];
		}
	}
	printf("The union set is\n");
	for (i = 0; i < k; i++)
	{
		printf("%d\t", C[i]);
	}
	k = 0;
	// Computing intersection
	for (i = 0; i < SIZE; i++)
	{
		if (SA[i] == 1 && SB[i] == 1)
		{
			DS[i] = 1;
		}
		else
		{
			DS[i] = 0;
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		if (DS[i] == 1)
		{
			D[k++] = U[i];
		}
	}
	printf("\nThe intersection set is:\n");
	for (i = 0; i < k; i++)
	{
		printf("%d\t", D[i]);
	}
}