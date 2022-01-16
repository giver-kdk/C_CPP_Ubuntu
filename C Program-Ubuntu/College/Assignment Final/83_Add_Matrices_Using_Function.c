/* Program to add two 3 × 4 matrices and print the result in matrix form; use separate functions
to take input and to add and display the result.*/ 
#include <stdio.h>
#include <conio.h>
#define row 3
#define col 4

int inputArray(int array[row][col])
{
	int i, j;
	printf("Enter %d by %d matrix elements:\n", row, col);
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
}

int addArray(int array1[row][col], int array2[row][col])
{
	int sum[row][col], i, j;

	for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }  
	printf("Sum of two Matrices is:\n");
	 for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }  
}

int main()
{
    int i, j, matrix1[row][col], matrix2[row][col];
	inputArray(matrix1);							// Call by reference
	inputArray(matrix2);
    addArray(matrix1, matrix2);
	getchar();
}