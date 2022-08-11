#include<stdio.h>

/*This program displays m by n Matrix with input elements.*/
int main()
{
	int a[10][10],m,n,i,j;						//Declares 2D Array[row][column]
	printf("enter size of row and column:\n");
	scanf("%d%d",&m,&n);

	printf("enter the element of matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);			//Saves input element to specific position of Array
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",a[i][j]);			//Prints Array containing input elements.
								//One element is printed at a time.So, loop is required.
		}
		printf("\n");
	}
	return(0);
}