#include <stdio.h>
/*This program prints number from 1 to 100 divisible by 5*/

int main()
{
    int i;
    for(i=1;i<=100;i++)               //for(Initialization;Condition;Update). Checks the condition 101 time.
                         //One extra condition check for False condition.
    {
        if(i%5==0)
        {
            printf("%d\n", i);        
        }
    }
}