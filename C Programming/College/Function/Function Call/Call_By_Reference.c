#include <stdio.h>

/*This program calls function/passes argument by adress of variable*/
void modify(int *x);

void main()
{
    int a=10;
    printf("Before the fx call, value of a= %d", a);
    modify(&a);                                     //Address of 'a' sent as argument.
    printf("\nAfter the fx call, value of a= %d", a);
}
void modify(int *x)     //Gets memory address 
{
    *x= *x+5;                               //Component of the pointed address is modified.
    printf("\nThe value of x is: %d", *x);  //Prints the modified component.
    printf("\nThe address of x is: %d", x);  //Prints the address of modified component.
}