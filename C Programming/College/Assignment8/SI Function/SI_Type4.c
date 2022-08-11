#include <stdio.h>

/*Simple Interest function with retun type and with argument.*/
int find_simpleinterest(int p, int t, int r);

void main()
{
    int principle, time, rate, simpleinterest;
    printf("Enter principle: ");
    scanf("%d", &principle);
    printf("Enter time: ");
    scanf("%d", &time);
    printf("Enter rate: ");
    scanf("%d", &rate);
    simpleinterest= find_simpleinterest(principle, time, rate);
    printf("Simple Interest is %d", simpleinterest);
}
int find_simpleinterest(int p, int t, int r)
{
    int SI;
    SI= p*t*r/100;
    return(SI);
}