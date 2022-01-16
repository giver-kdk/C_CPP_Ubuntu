/*This program swaps three variable numbers using function call by reference*/
#include <stdio.h>
#include <conio.h>
void circularshift(int *, int*, int*);
void main()
{
int x=5, y=9, z=8;
printf("\nBefore circular shift-x, y and z are:%d\t%d\t%d",x,y,z);
circularshift(&x,&y,&z);
printf("\nAfter circular shift-x, y & z are:%d\t%d\t%d",x,y,z);
getchar();
}
void circularshift(int *x, int *y, int *z)
{
int temp1, temp2;
temp1=*x;
temp2=*y;
*x=*z;
*y=temp1;
*z=temp2;
}


