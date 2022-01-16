/*This program stores two 2D Matrices of both size 3 by 4
in a 3D Array and prints sum of two Matrices in 3 by 4 form.*/
#include <stdio.h>
#define num 2
#define row 3
#define col 4

int main()
{
    //Define 3D Matrix
    int i, j, k, matrix[num][row][col] = 
    {
        {
            {1, 0, -1, 4},                      //1st 2D Matrix
            {2, 8, 11, -2},
            {4, 5, 0, 0}
        },
        {
            {-1, 10, 1, 3},                    //2nd 2D Matrix
            {5, 5, 5, 5},
            {14, 5, 0, 1}
        }
    };
    
    int sum[row][col];
    //Output 1st Internal Matrix
    printf("The 1st Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", matrix[0][i][j]);                //'num' = 0 for 1st Matrix
        }
        printf("\n");
    }
    //Output 2nd Internal Matrix
    printf("The 2nd Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", matrix[1][i][j]);                //'num' = 1 for 2nd Matrix
        }
        printf("\n");
    }
    //Adding the Matrix elements of 3D Array
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = matrix[0][i][j] + matrix[1][i][j];         
        }
    }
    //Output Sum
    printf("Sum of two Matrices of 3D Matrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
}