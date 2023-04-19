#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float p, t, r, SI, CI, SA, CA;
    printf("Enter the priciple: ");
    scanf("%f", &p);
    printf("Enter the time");
    scanf("%f", &t);
    printf("Enter the rate in percentage per annum: ");
    scanf("%f", &r);
    SI= p*t*r/100;
    printf("\nThe Simple Interest is: %.2f", SI);
    CI= p*(pow(1+r/100,t)-1);
    printf("\nThe Compound Interest is: %.3f", CI);
    SA= p+SI;
    printf("\nSimple Amount: %.3f", SA);
    CA= p+CI;
    printf("\nCompound Amount %.3f", CA);
    printf("\nThe difference between CA and SA: %.3f", CA-SA);

}