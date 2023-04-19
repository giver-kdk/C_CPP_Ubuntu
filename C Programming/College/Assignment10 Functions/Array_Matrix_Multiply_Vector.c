/*This program does matrix multiplication using a vector matrix component.
Eg: (For 2 by 3 Matrix and 3 by 1 Vector)
[2 3 0    *    [2
 1 2 -1]        1    =  2(2   + 1(3   +   3(0    =   (7
                3]        1)      2)        -1)       1)     */
#include <stdio.h>
#include <conio.h>
#define N 3
void multiply(int rix[][N], int tor[]);
void main()
{   //Multiplication only possible if Vectore size = column of Matrix
    int matrix[N][N],vector[N],i,j;     

    printf("Input matrix elements of order %d*%d:\n",N,N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            scanf("%d",&matrix[i][j]);
    }

    printf("\nThe matrix is:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf(" %d\t",matrix[i][j]);
        printf("\n");
    }

    printf("Input vector of %d components:\n",N);
    for(i=0;i<N;i++)
        scanf("%d", &vector[i]);

    printf("\nThe %d component vector is:\n",N);
    for(i=0;i<N;i++)
    {
        printf("%d\t", vector[i]);
    }

    multiply(matrix, vector);
    getchar();
}

void multiply(int mat[][N],int vec[N])
{
    int multiply[N], i, j, row_mul_col=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {   //Vector element(column) multiplies whole single column of Matrix and adds up
            row_mul_col=row_mul_col+vec[j]*mat[j][i];       
        }
        multiply[i]=row_mul_col;
        row_mul_col=0;
    }
    printf("\n The matrix after multiplication is:\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t", multiply[i]);
    }
}
