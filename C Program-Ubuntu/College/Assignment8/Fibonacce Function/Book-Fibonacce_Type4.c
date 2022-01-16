#include <stdio.h>

/*Fibonacce Series function with return type and with argument.*/
int print_fibonacce(int num);

void main()
{
    int i, number, fibonacce;
    printf("Enter a number for Fibonacce Series: ");
    scanf("%d", &number);
    for(i=1; i<=number; i++)                //Loop used for repeating output.
    {
        fibonacce= print_fibonacce(i);
        printf("%d\t", fibonacce);         
    }
}
int print_fibonacce(int num)
{
    if(num==1)                      //At 1st iteration, 1st term of series is '0'.
    {
        return(0);
    }
    else if(num==2)             //At 2nd iteration, 2nd term of series is '1'.
    {
        return(1);
    }
    else
    {
        return(print_fibonacce(num-1)+ print_fibonacce(num-2)); //3rd term is sum of 2nd and 1st term and so on.
    }   //Previous values of series are stored in memory and added.
}