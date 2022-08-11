#include <stdio.h>
/*This program prints number from 1 to 100 divisible by 5*/

int main()
{
    int i, div;
    for(i=1;i<=100;i++)               //for(Initialization;Condition;Update). Checks the condition 101 time.
                         //One extra condition check for False condition.
    {
        div=i%5;
        if(i%5==0 && i%7!=0)
        {
            printf("%d\t", i);        
        }
    }
}