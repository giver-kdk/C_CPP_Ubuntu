#include <stdio.h>

/*This program calculates the sum of odd 1/n numbers.*/
int main()
{
    int i, num;
    float sum=0, count=1;
    printf("Enter any number for 1/n: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        //Only add sum when 'i' is odd. 
        if(i%2!=0)      //'%' can only be used with integer.
        {
            sum=sum+1/count;
        }
        count=count+1;
    }
    printf("The sum of odd rational series is: %f", sum);
}