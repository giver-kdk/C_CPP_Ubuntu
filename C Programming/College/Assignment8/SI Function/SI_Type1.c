#include <stdio.h>

/*Simple Interest function with no retun type and with no argument.*/
void find_simpleinterest();

void main()
{
    find_simpleinterest();
}
void find_simpleinterest()
{
    int p, t, r, SI;
    printf("Enter principle: ");
    scanf("%d", &p);
    printf("Enter time: ");
    scanf("%d", &t);
    printf("Enter rate: ");
    scanf("%d", &r);
    SI= p*t*r/100;
    printf("Simple Interest is %d", SI);
}