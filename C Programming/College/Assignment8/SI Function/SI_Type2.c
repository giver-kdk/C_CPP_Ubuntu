#include <stdio.h>

/*Simple Interest function with no retun type and with argument.*/
void find_simpleinterest(int p, int t, int r);

void main()
{
    int principle, time, rate;
    printf("Enter principle: ");
    scanf("%d", &principle);
    printf("Enter time: ");
    scanf("%d", &time);
    printf("Enter rate: ");
    scanf("%d", &rate);
    find_simpleinterest(principle, rate, time);
}
void find_simpleinterest(int p, int t, int r)
{
    int SI;
    SI= p*t*r/100;
    printf("Simple Interest is %d", SI);
}