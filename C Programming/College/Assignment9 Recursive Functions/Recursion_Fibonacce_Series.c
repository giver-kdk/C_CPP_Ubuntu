#include <stdio.h>

/*This program print fibonacce series using recursion method.*/
int print_fibonacce(int num);
int main()
{
    int i, number;
    printf("Enter the number of terms for fibonacce series: ");
    scanf("%d", &number);
    for(i=1; i<=number; i++)
    {
        printf("%d\t", print_fibonacce(i));     //Repeatedly prints output according to 'i'.
    }
}
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
        return(print_fibonacce(num-1)+ print_fibonacce(num-2)); //Recursion causing to return 'n'th term.
                                                                                //'n'= 'num'.
    }
}