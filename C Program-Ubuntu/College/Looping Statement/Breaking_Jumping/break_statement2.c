#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
       printf("%d", i);         //Prints whatever 'i' is.
       if(i<3)
       {
           break;           //When 'i'<3, then control goes out of the loop(for)
       }
    }
}
/*Here, the output is '1' cause first 'i=1' is printed, then condition is checked.
Since 'i<3'==True, so the loop is broken after that.*/