/* Program to read n numbers in an array and display their sum and average; 
Use functions to read input and find sum and average */
#include <stdio.h>
#include <conio.h>

void findSum(int size)
{
	int i, sum = 0, array[100], average;
	printf("Enter any %d elements: ", size);
	for(i = 0; i < size; i++)
	{	
		scanf("%d", &array[i]);
		sum = sum + array[i];
	}
	average = sum / size;
	printf("Sum of elements: %d\n", sum);
	printf("Average of elements: %d", average);
}
int main()
{
	int num;
	printf("Enter number of elements: ");
	scanf("%d", &num);
	findSum(num);
	getchar();
}