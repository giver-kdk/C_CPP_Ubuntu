//Program to compute sum of digits of an integer.
#include <stdio.h>
#include <conio.h>
void main()
{
int num, rem, sum=0;
printf("\nEnter number to be checked:\t");
scanf("%d", &num);
do
	{
	rem = num % 10;
	num = num/10;
	sum += rem;
	}while(num!=0);

printf("\nThe sum of digits is:\t%d", sum);
getchar();
}
