/* program to calculate factorial of a number using recursive function and the same program
without using recursive function.*/
#include <stdio.h>
#include <conio.h>

int do_factorial(int x)
{
    int fact1=1;
    if(x==0)                            //Acts as condition to terminate recursion
    {
        return(1);
    }
    else
    {
        fact1=x*do_factorial(x-1);  	//Function repeatedly calls itself
        return(fact1);
    }
}

void main()
{
	// With Recursive Call
    int i, num, factorial;
    printf("Enter the number: ");
    scanf("%d", &num);
    factorial= do_factorial(num);
    printf("Factorial of the number with recursive call is %d", factorial);
	// Without Recursive Call
	factorial = 1;
	for(i = 1; i <= num; i++)
	{
		factorial = factorial * i;
	}
	printf("\nFactorial of the number without recursive call is %d", factorial);
    getchar();
}