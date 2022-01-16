#include <stdio.h>
#include <math.h>

/*Compound Interest function with return type and with argument*/
float find_compoundinterest(int p, int t, float r);

void main()
{
    int principle, time;
    float rate, compoundinterest;
    printf("Enter the principle: ");
    scanf("%d", &principle);
    printf("Enter the time: ");
    scanf("%d", &time);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    compoundinterest= find_compoundinterest(principle, time, rate);
    printf("Compound Interest is %.3f", compoundinterest);
}
float find_compoundinterest(int p, int t, float r)
{
    float CI;                          
    CI= p*(pow(1+r/100, t)-1);
    return(CI);
}