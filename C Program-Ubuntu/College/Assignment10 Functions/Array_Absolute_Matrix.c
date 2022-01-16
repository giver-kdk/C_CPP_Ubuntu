#include<stdio.h>
#include <conio.h>
#include <math.h>
#define M 10
#define N 5
void absolute(int rix[][N], int, int);
void main()
{
    int matrix[M][N], i, j, m, n;
    printf("Input size of matrix up to %d*%d:\n",M-1,N-1);
    scanf("%d %d", &m, &n);
    if(m>9||n>4)
    {
        printf("\n The order is out of range.");
        getchar();
        exit();
    }
    printf("\n Enter matrix elements of order %d*%d:\n", m, n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d", &matrix[i][j]);
    }

    printf("\nThe matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf(" %d\t",matrix[i][j]);
        printf("\n");
    }

    absolute(matrix,m,n);
    printf("\nThe absolute matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    getchar();
}
void absolute(int mat[][N], int m, int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=abs(mat[i][j]);
        }
    }
}
