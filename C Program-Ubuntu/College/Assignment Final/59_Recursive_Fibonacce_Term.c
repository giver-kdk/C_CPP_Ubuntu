/* Program to find nth Fibonacci number using recursive function.*/
#include <stdio.h>
#include <conio.h>

int print_fibonacce(int num)
{
    if(num==1)
    {
        return(0);
    }
    if(num==2)
    {
        return(1);
    }
    else
    {
        return(print_fibonacce(num-1)+ print_fibonacce(num-2)); 
    }
}

int main()
{
    int i, number;
    printf("Enter the terms for fibonacce number: ");
    scanf("%d", &number);
	printf("Fibonacce number is: %d\t", print_fibonacce(number));    
    getchar();
}