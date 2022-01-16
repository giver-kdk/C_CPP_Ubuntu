#include <stdio.h>

/*This program shows that global variable can be updated inside functions*/

int i=10;           //Defining global variable

int function();

void main()
{//start of main block
    i=i+1;
    printf("%d", i);
    function();
}//end of main block
int function()
{//start of function block
    printf("\n%d", i);
}//end of function block

