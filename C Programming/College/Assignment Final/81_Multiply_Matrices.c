/* Program to multiply two rectangular matrices and display the resultant matrix.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, row1, column1, row2, column2, row, column;
    printf("Enter the dimension of 1st Matrix:\n");
    scanf("%d%d", &row1, &column1);
    printf("Enter the dimension of 2nd Matrix:\n");
    scanf("%d%d", &row2, &column2);
	//Checks Matrix Dimension 
    if(column1 == row2)                                       
    {
        row = row1;
        column = column2;
        int matrix1[row1][column1], matrix2[row2][column2], product[row][column];
        //Matrix Input
        printf("Enter the element of 1st %d by %d Matrix:\n", row1, column1);
        for(i = 0; i < row1; i++)
        {
            for(j = 0; j < column1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter the element of 2nd %d by %d Matrix:\n", row2, column2);
        for(i = 0; i < row2; i++)
        {
            for(j = 0; j < column2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }
        //Matrix Multiplication 
        for(i = 0; i < row; i++)             
        {
            for(j = 0; j < column; j++)
            {  
                product[i][j] = 0;                  // Reset for reuse
                for(k = 0; k < column1; k++)             
                {
                    product[i][j] = product[i][j] + (matrix1[i][k] * matrix2[k][j]);  
                }
            }
        }
        printf("The Matrix Multiplication is:\n");
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < column; j++)
            {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
    else                            
    {
        printf("Error!\tColumn and Row of 1st and 2nd Matrix should be same!");
    }
    getchar();
}