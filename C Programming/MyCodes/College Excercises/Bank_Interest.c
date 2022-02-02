#include <stdio.h>
#include <conio.h>

/*This program calculates Simple Interest according to the bank policies.*/
int main()
{
    int p, t, r, SI;
    printf("Enter principle: ");
    scanf("%d", &p);
    printf("Enter the time: ");
    scanf("%d", &t);

    if(t<=2 && t>0)         // If time is less than 2, then rate is 5%
    {
        r=5;
        SI=p*t*r/100;
        printf("The simple interest is %d", SI);
    }
    else if(t>2 && t<=5)        // If time is more than 2 and less than 5, then rate is 6%
    {
        r=6;
        SI=p*t*r/100;
        printf("The simple interest is %d", SI);
    }
    else if(t>5)            // If time is more than 2, then rate is 7%
    {
        r=7;
        SI=p*t*r/100;
        printf("The simple interest is %d", SI);
    }
}