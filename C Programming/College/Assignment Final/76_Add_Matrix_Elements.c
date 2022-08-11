/* Program that accepts the elements of 3 × 3 matrix and calculate the sum of all elements of the matrix.*/
#include <stdio.h>
#include <conio.h>
#define row 3 
#define col 3

int main()
{
    int i, j, array[row][col], sum = 0;
    printf("Enter the elements of %d by %d Matrix:\n", row, col);

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
            sum = sum + array[i][j]; 
        }
    }
    printf("Sum of the array elements is: %d", sum);
    getchar();
}