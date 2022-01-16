#include <stdio.h>

/*This program shows property of global variable*/
int display();
int x=50;
void main()
{
    int x=5;                        //Defining new variable(Not updating Global Variable)
    printf("Value of x= %d", x);
    display();
}
int display()
{
    printf("\nValue of x= %d", x);
}