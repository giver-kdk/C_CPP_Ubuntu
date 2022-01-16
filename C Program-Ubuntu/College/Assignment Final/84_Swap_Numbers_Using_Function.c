/* Program to swap two numbers using a function and by passing arguments as references.*/
#include <stdio.h>
#include <conio.h>

void swapNum(int *a, int *b)                
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	int a, b;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	printf("Before Swap:\nValue of a: %d\tValue of b: %d\n", a, b);
    swapNum(&a, &b);
	printf("After Swap:\nValue of a: %d\tValue of b: %d", a, b);
	getchar();
}