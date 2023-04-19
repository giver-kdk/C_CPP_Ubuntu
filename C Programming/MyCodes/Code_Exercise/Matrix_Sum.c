//WAP to calculate  sum of any 2*2 matrix and dispaly //
#include<stdio.h>
#include <conio.h>

int main()
{
  int a[2][2],b[2][2],s[2][2],i,j;                //Creates three 2D Array variables.
  printf("Enter the element of first matrix\n");


  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&a[i][j]);           //Stores input elements on the Array positions
    }
  }
    printf("Enter the element of second matrix\n");


  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&b[i][j]);         //Stores input elements on the Array positions
    }
  }
  printf("Given matrix is : \n");
    
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d\t",a[i][j]);     //Prints the Array of input elements
    }
    printf("\n");
  }
  printf("Given matrix is : \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("%d\t",b[i][j]);       //Prints the Array of input elements
    }
    printf("\n");
  }

  //adding
  for (i = 0; i < 2; i++){
    for (j = 0; j < 2; j++)
    {
      s[i][j]=a[i][j]+b[i][j];          //Addition of elements of 2 Arrays as like Matrix.
    }
  }
  printf("Sum of two matrices: \n");
  for (i = 0; i < 2; i++){
    for (j = 0; j < 2; j++) 
    {
      printf("%d\t ", s[i][j]);               //Prints the Array of added elements.
    }
  printf("\n");
  }
  return 0;
  getchar();
}