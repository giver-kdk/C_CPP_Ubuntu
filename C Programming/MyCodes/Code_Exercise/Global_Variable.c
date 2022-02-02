#include <stdio.h>
#include <conio.h>

/*This program proves that global varibale is recognized by all functions.*/

int a=2, b=3;                       //Variable declared outside main().

int do_subtract()               //User Defined Function
{
    int sub;
    sub= a-b;
    return(sub);  
}

int main()
{
    int diff;
    diff= do_subtract();                    
    printf("\nThe difference= %d", diff);
}

