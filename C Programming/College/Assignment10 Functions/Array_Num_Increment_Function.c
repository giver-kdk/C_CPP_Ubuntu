/*Program to read a matrix of order m*n.
 Pass this matrix to a function which increases each element of the matrix by 2.
*/
#include <stdio.h>
#include <conio.h>
#define M 3
#define N 3

void increase_by_2(int  rix[][N]);
void main()
{
    int matrix[M][N], i, j;
    printf("Input matrix elements of order %d*%d:\n", M, N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            scanf("%d", &matrix[i][j]);
    }

    printf("\nThe input matrix is:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            printf(" %d\t", matrix[i][j]);
        printf("\n");
    }

    increase_by_2(matrix);

    printf("\nThe output matrix is:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            printf(" %d\t", matrix[i][j]);
        printf("\n");
    }

    getchar();
}
void increase_by_2(int mat[][N])
{
    int i, j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            mat[i][j]=mat[i][j]+2;
    }
}
