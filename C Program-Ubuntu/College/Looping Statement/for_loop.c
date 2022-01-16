#include <stdio.h>


int main()
{
    int i;
    for(i=1;i<=50;i++)               //for(Initialization;Condition;Update). Checks the condition 51 time.
                                    //One extra condition check for False condition.
    {
        printf("%d\t", i);          //Runs for 50 times
    }
}