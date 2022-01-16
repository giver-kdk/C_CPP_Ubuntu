#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,sum;
char choice;
choice='y';
while(choice=='y')
	{
	printf("\nEnter two numbers to be added:\t");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("\nThe sum is:\t%d",sum);
	printf("\n\nDo you want to add another two numbers?");
	printf("\nPress y for yes and other characters for exit.\t");
	scanf(" %c",&choice);
	}
getchar();
}
