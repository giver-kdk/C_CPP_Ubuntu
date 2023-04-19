#include <stdio.h>

/*Fibonacce Series function with no return type and with no argument.*/
void print_fibonacce();

void main()
{
    print_fibonacce();
}
void print_fibonacce()
{
    int i, num, prev=0, next=1, fib1;
    printf("Enter a number for Fibonacce Series: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        printf("%d\t", prev);
        fib1=prev+next;
        prev= next;
        next= fib1;
        
    }
}