#include <stdio.h>
#include <conio.h>

/*This program prints repeated pattern:
                111
                222
                333                     */
int main()
{
    int i, j;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}