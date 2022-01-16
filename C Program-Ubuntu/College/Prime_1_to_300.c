#include <stdio.h>

int main()
{
    int num = 1, i, j;

    printf("Prime numbers between 1 and 200: ");
    while (num <= 200)
    {
        i = 2; //Inside loop to reset i=2 for next even check
        while (i <= num - 1)
        {
            if (num % i == 0) //Exits the loop if 'i' is even.
            {
                break;
            }
            i++;
        }
        if (i == num) //If 'i' is not divisible by any number from 2 to num-1, then prints 'i'.
        {
            printf("%d\n", i);
        }
        num++; //Increments 'num' for next loop.
    }
}