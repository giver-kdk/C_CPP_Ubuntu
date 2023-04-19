#include <stdio.h>

void main()
{//start of main block
    int a=5;
    printf("Value of a is: %d\n", a);
    {
        int b =20;                                  //Value of 'b' valid only inside this scope
        printf("Value of a is: %d\n", b);
    }
    //printf("Value of b is: %d", b);               //This statement is not valid, since 'b' is not defined out of the scope
    printf("Value of a is: %d", a);
    
}//end of main block