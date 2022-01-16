/* Program to read two-dimensional matrix and display its transposed form.*/
#include <stdio.h>
#include <conio.h>
#define ROW 2
#define COL 3
int main()
{
    int i, j, row, col;
    int matrix[ROW][COL];
    
    row = COL; 
    col = ROW;           //Row of Transpose Matrix is Column of Original Matrix and so on
    int transpose[row][col];
    //Input Matrix 
    printf("Enter the elements of %d by %d Matrix:\n", ROW, COL);
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Ouput Transpose 
    printf("\nThe transpose Matrix is:\n");
    for(i = 0; i < row; i++)                   
    {
        for(j = 0; j < col; j++)
        {
            transpose[i][j] = matrix[j][i];         
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    getchar();
}