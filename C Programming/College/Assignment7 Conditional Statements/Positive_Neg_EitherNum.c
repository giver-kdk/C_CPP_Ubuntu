#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/* Program to ask two numbers and display message “Either number is negative”, 
if one of the numbers is negative; otherwise display message “Both numbers are positive” */
void main()
{
int i, num1, num2;
printf("Enter first no:");
scanf("%d", &num1);
	if(num1<0)
		{
		goto negative;              //Control goes to printing 'negative', if first number is negative.
		}
printf("\nEnter second number:");
scanf("%d", &num2);
	if(num2<0)
		{
		goto negative;             //Control goes to printing 'negative', if second number is negative. 
		}
printf("\nBoth numbers are positive");
getchar();
return;                //Requests C program to exit execution and sends control back to calling function.
//exit(0);                            //Requests directly to the OS to terminate the program.
negative: printf("\nEither number is negative");
getchar();
}


