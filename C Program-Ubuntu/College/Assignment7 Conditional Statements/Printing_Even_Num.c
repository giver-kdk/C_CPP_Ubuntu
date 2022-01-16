#include <stdio.h>
#include <conio.h>

/*This program prints even numbers from 2 to n. */
void main()
{
int i, num;
printf("\nEnter a number:");
scanf("%d", &num);
printf("\nThe even numbers from 2 to %d are:\n", num);
for(i=1;i<=num;i++)
	{
	if(i%2!=0)
	  {
	  continue;         //Skips numbers which are not divisible by 2(i.e; Odd)
	  }
	  printf("%d\t", i);
	}
getchar();
}
	if(i%2!=0)
