/*Program to calculate sum of digits of entered integer number*/
#include <stdio.h>

int main()
{
    int number, remainder, sum=0; 
    printf("Enter any number: ");
    scanf("%d", &number);
    while(number!=0)
    {
        remainder= number%10;
        sum= sum+ remainder;
        number= number/ 10;
    }
    printf("Sum of digits of number is %d", sum);
}