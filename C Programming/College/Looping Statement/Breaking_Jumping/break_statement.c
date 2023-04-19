#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
       printf("%d", i);         //Prints whatever 'i' is.
       if(i==3)
       {
           break;           //When 'i'==3, then control goes out of the loop(for)
       }
       printf(" and ");
    }

}
/*Here, 'break' statement is acting like if there was 'else' statement*/