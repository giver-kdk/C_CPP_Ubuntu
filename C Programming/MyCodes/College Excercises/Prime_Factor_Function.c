#include <stdio.h>

/*This program prints the prime factors of entered positive number using function call.
        Eg: For 24, prime factors are 2, 2, 2 and 3.*/
int number;

int prime_factor();

int main()
{
    printf("Enter any postive number: ");
    scanf("%d", &number);
    while(number!=1)                            //Using loop cause factors can be more than 1
    {
        printf("%d\t", prime_factor());         //Print the returned factor
    }
}
int prime_factor()
{
    int i=2;
    while(number!=1)
    {
        if(number%i==0)                 
        {
            number= number/i;           //If divisible by 'i', then actually divide 'number'
            return(i);            //Return the factor
        }
        else
        {
            i++;                //If current 'i' doesn't divide 'number' then only increment 'i'
        }
    }
}