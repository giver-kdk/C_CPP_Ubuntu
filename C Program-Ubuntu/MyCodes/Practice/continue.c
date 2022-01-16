#include <stdio.h>
#include <conio.h>

/*This programs prints number from 0 to 9 by skipping 5.*/
int main()
{
    int i;
    for (i=0; i<10; i++)
    {
        if(i==5)
        {
            continue;           //skips the conditioned part(i==5) and runs other part of the entire loop. 
        }
        printf("%d", i);
    }
}