/* Program to ask two numbers and display message “Either number is negative”, 
if one of the numbers is negative; otherwise display message “Both numbers are positive” */
#include <stdio.h>
#include <conio.h>

void main()
{
int i, num1, num2;
printf("Enter first no:");
scanf("%d", &num1);
	if(num1<0)
		{
		goto negative;
		}
printf("\nEnter second number:");
scanf("%d", &num2);
	if(num2<0)
		{
		goto negative;
		}
printf("\nBoth numbers are positive");
getchar();
return;
negative: printf("\nEither number is negative");
getchar();
}
