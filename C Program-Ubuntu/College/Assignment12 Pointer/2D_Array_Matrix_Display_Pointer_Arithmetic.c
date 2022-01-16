//Program to add two m*n matrices using pointer arithmetics
#include <stdio.h>
#include <conio.h>
#define m 2
#define n 3

void main()
{
    int  a[m][n], b[m][n], sum[m][n], i, j;
    printf("Input first matrix elements of order %d*%d:\n", m, n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }

    printf("\nThe first matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    printf("Input second of order %d*%d:\n", m, n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",*(b+i)+j);
    }

    printf("\nThe second matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d\t",*(*(b+i)+j));
        }
        printf("\n");
    }
    printf("\n The sum of the matrices is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
            printf("\t%d",*(*(sum+i)+j));
        }
        printf("\n");
    }
    getchar();
}

