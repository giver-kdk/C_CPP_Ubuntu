//Program to copy an array of double
#include <stdio.h>
#include <conio.h>

#define SIZE 5
void main()
{
double a[SIZE];
double b[SIZE];
double *p;
int i;
for(i=0;i<SIZE;i++)
	scanf("%lf",&a[i]);
p=a;
for(i=0;i<SIZE;i++)
	{
	b[i]=*(p+i);
	printf("\n%.2lf",b[i]);
	}
getchar();
}
