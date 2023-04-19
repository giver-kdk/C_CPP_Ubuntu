/* Program to convert a 4 × 4 matrix to lower triangular and display the result in matrix form.*/
#include <stdio.h>
#include <conio.h>
#define ROW 4
#define COL 4

int main()
{
    int i, j, matrix[ROW][COL];
    
    //Input Matrix 
    printf("Enter the elements of %d by %d Matrix:\n", ROW, COL);
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Getting Lower Triangle 
    for(i = 0; i < ROW - 1; i++)                      
    {
        for(j = i + 1; j < COL; j++)
        {	// Assign 0 to upper part 
            matrix[i][j] = 0;    							    
        }
    }
    //Ouput Transpose 
    printf("\nThe Lower Matrix is:\n");
    for(i = 0; i < ROW; i++)                   
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    getchar();
}