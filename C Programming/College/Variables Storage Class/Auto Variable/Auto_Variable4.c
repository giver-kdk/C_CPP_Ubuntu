#include <stdio.h>

void main()
{//start of main block
    auto int a=5;
    {//start of main block
        auto int a=10;
        {   
            auto int a=15;                                //Empty {} means 'Scope'.
            printf("%d\n", a);
        }
        printf("%d\n", a);
    }//end of sub block
    printf("%d\n", a);
}//end of main block