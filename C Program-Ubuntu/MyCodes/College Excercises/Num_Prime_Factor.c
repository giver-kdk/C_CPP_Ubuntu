#include <stdio.h>

/*This program prints the prime factors of entered positive number.
        Eg: For 24, prime factors are 2, 2, 2 and 3.*/
int prime_factor(int num);
int main()
{
    int i=2, number;                        //'i'= 2 = smallestr prime 
    printf("Enter any postive number: ");
    scanf("%d", &number);
    while(number!=1)                    //Divide 'number' until its 1
    {
        if(number%i==0)                 
        {
            number= number/i;           //If divisible by 'i', then actually divide 'number'
            printf("%d", i);            //Print the factor
        }
        else
        {
            i++;                //If current 'i' doesn't divide 'number' then only increment 'i'
        }
    }
}