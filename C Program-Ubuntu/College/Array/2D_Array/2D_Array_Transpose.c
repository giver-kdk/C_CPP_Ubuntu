/*This program takes a matrix as an input from the user and displays its transpose*/
#include <stdio.h>
int main()
{
    int i, j, row, column, row1, column1;
    //Input Matrix Dimension
    printf("Enter the row and column of the matrix: ");
    scanf("%d%d", &row, &column);
    int matrix[row][column];
    
    row1 = column; 
    column1 = row;           //Row of Transpose Matrix is Column of Original Matrix and so on
    int transpose[row1][column1];
    //Input Matrix Element
    printf("Enter the elements of %d by %d Matrix:\n", row, column);
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Output Matrix Element
    printf("The entered Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    //Getting Transpose Matrix
    for(i = 0; i < row1; i++)                       //Iteration limit set by row of Transpose Matrix
    {
        for(j = 0; j < column1; j++)
        {
            transpose[i][j] = matrix[j][i];         //Interchanging row and column
        }
    }
    //Ouput Transpose Matrix
    printf("\nThe transpose Matrix is:\n");
    for(i = 0; i < row1; i++)                   
    {
        for(j = 0; j < column1; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}