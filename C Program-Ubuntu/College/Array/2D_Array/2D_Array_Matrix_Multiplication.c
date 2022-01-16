/*This program calculates Matrix Multiplication using 2D Array.*/
#include <stdio.h>

int main()
{
    int i, j, k, row1, column1, row2, column2, row, column;
    printf("Enter the dimension of 1st Matrix:\n");
    scanf("%d%d", &row1, &column1);
    printf("Enter the dimension of 2nd Matrix:\n");
    scanf("%d%d", &row2, &column2);

    if(column1 == row2)                                          //Checks Matrix Dimension for Multiplication 
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
        //Matrix Multiplication Logic
        for(i = 0; i < row; i++)             
        {
            for(j = 0; j < column; j++)
            {  
                product[i][j] = 0;                  //Resets value of product[i][j] at every iteration of 'j'
                for(k = 0; k < column1; k++)              //Condition can also be k < row2. Since, column1 = row2
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
    else                                //For Wrong Dimension
    {
        printf("Invalid Dimensions!\tColumn of 1st Matrix and Row of 2nd Matrix should be same!");
    }
}