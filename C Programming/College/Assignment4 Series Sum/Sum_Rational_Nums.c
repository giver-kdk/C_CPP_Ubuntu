#include <stdio.h>

/*This program calculates the sum of 1/n numbers.*/
int main()
{
    int i, num;
    float sum=0, count=1;                 
    printf("Enter any number for 1/n: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)       //here, 'i' can't be zero. Since 1/0= infinity.
    {
        sum=sum+(1/count);              //Here, '1/i' not written since 'i' declared as integer
        count=count+1;                  //Since, 'i' not used in 'sum'. So, 'count' incremented
    }
    printf("The sum of rational series is %f", sum);
}