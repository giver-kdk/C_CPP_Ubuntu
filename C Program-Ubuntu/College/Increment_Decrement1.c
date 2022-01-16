#include <stdio.h>
#include <conio.h>
void main()

{
    int y, m=5, x, l=5;
    y=++m;                                 //operator before operand. First 'a' is incremented and then value used
    printf("The value of y is %d", y);
    printf("\nThe value of m is %d", m); 
    x=l++;                                   //operand before oprator. First 'a' is used and then incremented
    printf("\nThe value of x is %d", x);
    printf("\nThe value of l is %d", l);
    printf("\nThe value of x is %d", x);     //still, x has unincremented value of l
    x=l;        
    printf("\nThe value of x is %d", x);    //Now, x has the incremented value of l
    /*printf("\nThe number is %d", a++);      //operand before oprator. First 'a' is used and then incremented
    printf("\nThe number is %d", a);        //normal printing. The above a's incremented value is shown1*/
}