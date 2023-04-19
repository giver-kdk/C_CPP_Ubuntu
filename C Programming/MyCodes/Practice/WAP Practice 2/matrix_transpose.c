#include <stdio.h>

#define ROW 2
#define COL 3

int main()
{
	int i, j, row1, col1;
	int matrix[ROW][COL], transpose[COL][ROW];
	printf("Enter the elements of %d by %d matrix: ", ROW, COL);
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	row1 = COL;
	col1 = ROW;
	for(i = 0; i < row1; i++)
	{
		for(j = 0; j < col1; j++)
		{
			transpose[i][j] = matrix[j][i];
		}
	}
	printf("The transpose of matrix is:\n");
	for(i = 0; i < row1; i++)
	{
		for(j = 0; j < col1; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}

}