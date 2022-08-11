#include <stdio.h>
#include "File2.c"

/*This program accesses function and variable of another file*/
void function1();
int n;

void main()
{
    printf("This is main fuction in File1.c where n= %d\n", n);   
    function1();
    function2();
}
void function1()
{
    n=1;
    printf("This is function1 in File1.c where n= %d\n", n);

}