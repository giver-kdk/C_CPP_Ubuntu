#include <stdio.h>

void main()
{
    int i, j;
    for (i = 2; i <= 300; i++) //Increments 'i' from 2 to 300.
    {
        for (j = 2; j <= i - 1; j++) //Increments 'j' according to the value of 'i'.
        {
            if (i % j == 0) //Checks if number from 2 to 'j' divided 'i' or not.
                break;      //If number is divisible, then it's not prime. So, exits loop.
        }
        if (i == j)            //If none of the numbers from 2 to 'i' divided 'i'. Then, control flows here.
            printf("%d\n", i); //Prints that numbers('i') which isn't divisible by number from 2 to i.
    }
}