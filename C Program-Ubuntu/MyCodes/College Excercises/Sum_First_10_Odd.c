/*Program to calculate sum of first 10 odd numbers.*/
#include <stdio.h>

int main()
{
    int i=0, odd=0, sum=0;
    while(odd!=10)
    {
        if(i%2!=0)
        {
            sum=sum+ i;
            odd++;
        }
        i++;
    }
    printf("Sum of first 10 odd numbers: %d", sum);
}