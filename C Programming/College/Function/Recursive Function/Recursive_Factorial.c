#include <stdio.h>

/*This program calculates the factorial of entered number.*/
int do_factorial(int x);

void main()
{
    int num, factorial;
    printf("Enter the number: ");
    scanf("%d", &num);
    factorial= do_factorial(num);
    printf("Factorial of the number is %d", factorial);
}
int do_factorial(int x)
{
    int fact1=1;
    if(x==0)                            //Acts as condition to terminate recursion
    {
        return(1);
    }
    else
    {
        fact1=x*do_factorial(x-1);  //Function repeatedly calls itself inside 'itself' causing looping effect.
        return(fact1);
    }
}
