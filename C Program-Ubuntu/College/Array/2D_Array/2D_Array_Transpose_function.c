/*This program displays transpose of given Matrix using function call by name*/
#include <stdio.h>

int transpose_array(int a[10][10], int result[10][10], int row, int column);
int main()
{
    int i, j, row1, column1, row2, column2;
    //Input Matrix Dimension
    printf("Enter the row and column of the matrix: ");
    scanf("%d%d", &row1, &column1);
    int matrix[10][10];
    
    row2 = column1; 
    column2 = row1;           //Row of Transpose Matrix is Column of Original Matrix and so on
    int transpose[10][10];
    //Input Matrix Element
    printf("Enter the elements of %d by %d Matrix:\n", row1, column1);
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Output Matrix Element
    printf("The entered Matrix is:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    transpose_array(matrix, transpose, row2, column2);
    //Ouput Transpose Matrix
    printf("\nThe transpose Matrix is:\n");
    for(i = 0; i < row2; i++)                   
    {
        for(j = 0; j < column2; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}
int transpose_array(int a[10][10], int result[10][10], int row, int column)
{
    int i, j;
    for(i = 0; i < row; i++)                       //Iteration limit set by row of Transpose Matrix
    {
        for(j = 0; j < column; j++)
        {
            result[i][j] = a[j][i];         //Interchanging row and column
        }
    }
}
