/*Program to add, subtract, multiply and divide two complex numbers using switch statement*/
#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,x,y,real,img;
char opr;
printf("\nEnter first complex number of the form (a+ib):");
scanf("%d+i%d", &a, &b);                //Formatted input
printf("\nEnter second complex number of the form (x+iy):");
scanf("%d+i%d", &x, &y);                //Formatted Input
printf("\nEnter one of the operators among +, -, *, /:\t");
scanf(" %c",&opr);

switch(opr)
	{
	case '+':
		real = a+x;
		img = b+y;
		printf("\nThe addition is:%d+i%d.", real, img);
		break;
	case '-':
		real = a-x;
		img = b-y;
		printf("\nThe subtraction is:%d+i%d.", real, img);
		break;
	case '*':
		real = a*x-b*y;                 //Formula for multiplication of real part of Complex Number
		img = a*y+b*x;                  //Formula for multiplication of imaginary part of Complex Number
		printf("\nThe multiplication is:%d+i%d", real, img);
		break;
	case '/':
		real = (a*x+b*y)/(x*x+y*y);         //Formula for division of real part of Complex Number
		img = (b*x-a*y)/(x*x+y*y);      //Formula for division of imaginary part of Complex Number
		printf("\nThe division is:%d+i%d", real, img);
		break;
	default:
		printf("\nInvalid Operator.");
	}
getchar();
}

