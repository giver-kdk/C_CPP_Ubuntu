#include <stdio.h>
#include <conio.h>

/*This program calculates the sum of the series 1+2+3+....n.*/
int do_sum(int term);

void main()
{
    int sum, num;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    sum= do_sum(num);
    printf("The sum of the series is %d", sum);
    getchar();
}
int do_sum(int term)
{
    if(term==0)                         //Acts as condition to terminate recursion
    {
        return(0);
    }
    else
    {
        return(term + do_sum(term-1));      //If term=4, then 4+ 3+ 2+ 1.
    }
}