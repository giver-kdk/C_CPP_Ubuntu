#include <stdio.h>
#include <math.h>

/*Compound Interest function with no return type and with no argument*/
void find_compoundinterest();

void main()
{
    find_compoundinterest();
}
void find_compoundinterest()
{
    int p, t;
    float r, CI;                        //'rate' in float.
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the time: ");
    scanf("%d", &t);
    printf("Enter the rate: ");
    scanf("%f", &r);
    CI= p*(pow(1+r/100, t)-1);
    printf("Compound Interest is %.3f", CI);
}