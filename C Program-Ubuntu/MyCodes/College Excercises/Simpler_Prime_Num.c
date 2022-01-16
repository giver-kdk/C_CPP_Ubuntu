/*This program says whether a number is prime or not.*/
#include <stdio.h>

int main()
{
    int i, number, division_count=0;
    printf("Enter any number: ");
    scanf("%d", &number);
    for(i=1; i<=number; i++)            //Increments 'i' from 1 to 'number'
    {
        if(number% i==0)
        {
            division_count++;           //Increments every time when number is exactly divisible by 'i'
        }
    }
    if(division_count==2)           //'n' is prime only if 'n'%1=0 and 'n'%'n'=0(Hence, only 2 divisions)
    {
        printf("The number is a Prime Number");
    }
    else                            //If 'division_count' more than 2, then obviously not prime
    {
        printf("The number is not a Prime Number");
    }
}