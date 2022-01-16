#include <stdio.h>
// This program shows precedence order of operators

void main()
{
    int a, b, c ,d ,e ,f;           
    a= 10 + 20 * 30;            //'*' has highest precedence and then '+'
    b= 100/10 * 10;             //Evaluation is done from left to right for same precedence here
    c= 10*10/100;
    d= 100+200/10-3*10;
    e= 1>2 + 3 && 4;
    f= 1== 2!=3;      

    printf("a= %d", a);
    printf("\tb= %d", b);
    printf("\tc= %d", c);
    printf("\td= %d", d);
    printf("\te= %d", e);
    printf("\tf= %d", f);

}