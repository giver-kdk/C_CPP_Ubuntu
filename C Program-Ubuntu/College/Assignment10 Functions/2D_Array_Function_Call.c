/*Program to display a matrix.
This program shows that at least 2nd dimension of the array should be specified 
during function call by name*/
#include <stdio.h>
#include <conio.h>
void display(int rix[][2]);
void main()
{
int matrix[2][2], i, j;
printf("Input matrix elements:\t");
for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
		scanf("%d", &matrix[i][j]);
	}
display(matrix);
getchar();
}

void display(int mat[][2])
{
int i, j;
printf("\nThe matrix is:\n");
for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
		printf(" %d\t", mat[i][j]);
	printf("\n");
	}
}

