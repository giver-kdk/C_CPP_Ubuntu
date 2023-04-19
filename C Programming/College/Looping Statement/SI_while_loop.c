#include <stdio.h>


int main()
{
    int p, t, count=1;
    float r, SI;
    while(count<=4)
    {
        printf("\nEnter the P, T and R: ");
        scanf("%d%d%f", &p, &t, &r);
        SI=p*t*r/100;
        printf("\nSI is: %f", SI);
        count=count+1;
    }

}