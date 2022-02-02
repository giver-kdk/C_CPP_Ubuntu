/* Program to read n numbers in an array and display their sum and average.*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
    float sum = 0, n, average, array[100];

	printf("Enter the number of elements: ");
	scanf("%f", &n);  
	printf("Enter any %.0f elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%f", &array[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    average = sum / n;
    printf("Sum is %.3f\n", sum);
    printf("Average is %.3f", average);
    getchar();
}