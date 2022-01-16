#include <stdio.h>

/*This program tells how many elements entered in an array are positive, negative, even and odd*/
int main()
{
    int i, array[25], positive=0, negative=0, even=0, odd=0;
    printf("Enter any 25 numbers: \n");
    for(i=0; i<=24; i++)
    {
        scanf("%d", &array[i]);
        if(array[i]>=0)                     //Immediatly checks positivity after entering number
        {
            positive++;                     //If positive, then increment the value of 'positive'
        }
        if(array[i]<0)
        {
            negative++;
        }
        if(array[i]%2==0)
        {
            even++;
        }
        if(array[i]%2!=0)               //Seperately checks odd or not
        {
            odd++;
        }
    }
    printf("Positive Numbers: %d\nNegative Numbers: %d\n", positive, negative);
    printf("Even Numbers: %d\nOdd NUmbers: %d", even, odd);
}