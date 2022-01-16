#include <stdio.h>

/*This program shows global variable can be defined anywhere if it's declared before using.*/
void function()
{
    extern int y;               //Only declaration of global variable(Not Defining)
    y=y+1;
    printf("%d", y);
}
void main()
{
    extern int y;               //We have to use the extern keyword
    y=100;                      //Assigning Value to 'y'(Not Defining)
    function();
}
int y;                          //Definition of global variabe
/*NOTE: If we want to use global variable across different files, "extern" is compulsary*/