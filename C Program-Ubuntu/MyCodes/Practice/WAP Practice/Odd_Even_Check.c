#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}