#include <stdio.h>
#include <conio.h>
void main()

{
    int a=10;
    printf("The number is %d", a);
    printf("\nThe number is %d", ++a); //operator before operand. First 'a' is incremented and then value used
    printf("\nThe number is %d", a++);      //operand before oprator. First 'a' is used and then incremented
    printf("\nThe number is %d", a);        //normal printing. The above a's incremented value is shown
}