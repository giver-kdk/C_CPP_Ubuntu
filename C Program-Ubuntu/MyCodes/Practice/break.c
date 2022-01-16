#include <stdio.h>
#include <conio.h>

/*This program breaks the loop*/
int main()
{
    int i;
    for(i=0; i<=10; i++)
    {
        if(i==5)
        {
            break; //this immediatly stops the entire loop control flow when compiler enters this statement
                    
        }
        printf("%d", i);    //since, at i==5, the break statemnent is reached, So further 'printf' doesnt run.
    }
}