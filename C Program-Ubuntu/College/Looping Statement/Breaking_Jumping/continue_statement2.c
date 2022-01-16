#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=2; i++)
    {
        for(j=1; j<=2; j++)
        {
            if(i==j)
            {
                continue;           //Takes the control to beginning
            }
            printf("\n%d\t%d", i, j);
        }
    }
}