#include <stdio.h>

void main()
{//start of main block
    auto int a=2;
    {//start of sub block
        {                                 //Empty {} means 'Scope'.
            {
                printf("%d\n", a);
            }
            printf("%d\n", a);
        }
        printf("%d\n", a);
    }//end of sub block
}//end of main block