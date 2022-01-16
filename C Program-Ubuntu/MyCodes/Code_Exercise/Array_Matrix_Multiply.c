/*The matrix multipication between matrics A and B is only possible when the 
numbers of column in A is the same as number of rows in B.
WAP that takes two matrices as input from the user, checks if the multiplication is 
possible, and finally displays the product if possible.*/
#include <stdio.h>
int main()
{
    int m, n, x, y, a, b;
    printf("Enter the dimension of 1st matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the dimension of 2nd matrix:\n");
    scanf("%d%d", &x, &y);
    if(n == x)                      //Checks if multiplication possible or not
    {
        a = m;              //Dimension of multiplied matrix is [row of matrix1] * [column of matrix2]
        b = y;
        int matrix1[m][n], matrix2[x][y], matrix[a][b], i, j, k, sum = 0, product;
        printf("Enter the elements of 1st Matrix:\n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter the elements of 2st Matrix:\n");
        for(i = 0; i < x; i++)
        {
            for(j = 0; j < y; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }
        for(i = 0; i < a; i++)
        {
            for(j = 0; j < b; j++)
            {
                sum = 0;
                for(k = 0; k < n; k++)
                {
                    product = matrix1[i][k] * matrix2[k][j];
                    sum = sum + product; 
                }
                matrix[i][j] = sum;
            }
        }
        for(i = 0; i < a; i++)
        {
            for(j = 0; j < b; j++)
            {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
    }

}