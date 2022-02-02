/*This program calculates the sum of elements of Right Diagonal of Matrix.*/

#include <stdio.h>
#define row 4
#define col 4

int main()
{
    int sum = 0, matrix[row][col], i, j;
    //Input Matrix Element
    printf("Enter the elements of %d by %d Matrix:\n", row, col);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Output Matrix Element
    printf("The entered Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    //Sum of Right Diagonal Elements
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(i == j)      //Only adds elements of equal row and column index(See Matrix Representation)
            {
                sum = sum + matrix[i][j];
            }
        }
    }
    
    printf("Sum of Right (Down Inclined Diagonal) is %d\t", sum);
}