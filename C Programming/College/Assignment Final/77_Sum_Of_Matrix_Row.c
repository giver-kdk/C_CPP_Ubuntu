/* Program to read 4 × 4 matrix and find sum of each row.*/
#include <stdio.h>
#include <conio.h>
#define row 4
#define col 4

int main()
{
    int i, j, array[row][col], sum[row] = {0};						// All seum elements are 
    printf("Enter the elements of %d by %d Matrix:\n", row, col);
    //Array Elemnet Input
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
            sum[i] = sum[i] + array[i][j]; 
        }
    }

    printf("Sum of the row elements are:\n");
    for(i = 0; i < row; i++)
    {
		printf("%d\n", sum[i]);
    }
    getchar();
}