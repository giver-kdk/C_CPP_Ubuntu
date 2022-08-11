#include <stdio.h>

void main()
{//start of main block
    int a=5;
    printf("Value of a is: %d\n", a);
    {//start of sub block
        int a =15;
        printf("Value of a is: %d\n", a);
    }//end of sub block
    printf("Value of a is: %d", a);
}//end of main block