#include <stdio.h>
void main()
{
    int x=1234;
    printf("%d", x);            //normal output
    printf("\n%6d", x);         //right aligned if less than six digit output 
    printf("\n%06d", x);        //right aligned if less than six digit output with 0 on empty space
    printf("\n%-6d", x);        //left aligned if less than six digit output
    printf("\n%-06d", x);       //left aligned if less than six digit output. This is equivalent to '%-6d' 
    printf("\n%2d", x);         //normal output if greater than two. Extra space is created for extra digit 
}