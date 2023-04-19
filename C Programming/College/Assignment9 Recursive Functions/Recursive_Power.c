#include <stdio.h>

/*This program calculates x^y using recursion method.*/
int power_fx(int num, int pow);
int main()
{
    int number, power, result;
    printf("Enter the value of x and y: ");
    scanf("%d%d", &number, &power);
    result= power_fx(number, power);
    printf("The %d to the power %d is %d", number, power, result);
}
int power_fx(int num, int pow)
{
    if(pow==0)
    {
        return(1);
    }
    else
    {
        return(num* power_fx(num, pow-1));      //Direct recursion causing 'num' to multiply itself.
    }
}