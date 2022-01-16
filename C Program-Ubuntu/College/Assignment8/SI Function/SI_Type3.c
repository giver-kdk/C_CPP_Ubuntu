#include <stdio.h>

/*Simple Interest function with retun type and with no argument.*/
int find_simpleinterest();

void main()
{
    int simpleinterest;
    simpleinterest= find_simpleinterest();
    printf("Simple Interest is %d", simpleinterest);
}
int find_simpleinterest()
{
    int p, t, r, SI;
    printf("Enter principle: ");
    scanf("%d", &p);
    printf("Enter time: ");
    scanf("%d", &t);
    printf("Enter rate: ");
    scanf("%d", &r);
    SI= p*t*r/100;
    return(SI);
}