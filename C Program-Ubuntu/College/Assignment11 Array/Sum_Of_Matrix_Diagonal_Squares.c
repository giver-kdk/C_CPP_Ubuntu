/*This program prints the sum of square elements of diagonal of Matrix*/
#include <stdio.h>

int main()
{
    int i, j, row, col, sum = 0, matrix[50][50];
    printf("Enter the dimension of Matrix:\n");
    scanf("%d%d", &row, &col);
    if(row != col || (row > 50 && col > 50))
    {
        printf("Invalid Dimension! Please Enter a Square Dimension less than 50.");
    }
    else
    {
        printf("Enter the elements of %d by %d Matrix:\n", row, col);
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                if(i == j)
                {
                    sum = sum + (matrix[i][j] * matrix[i][j]);
                }
            }
        }
        printf("Sum of square of left diagonal elements is: %d", sum);
    }
}