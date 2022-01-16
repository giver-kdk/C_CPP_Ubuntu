#include <stdio.h>
#include <conio.h>

/*This program calculates sum of odd numbers */
int main()
{
    int i, num, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++)
    {
        if(i%2!=0)          //only add 'i' to sum when 'i' is odd.
        {
            sum=sum+i;
        }
    }
    printf("The odd sum is %d", sum);
}