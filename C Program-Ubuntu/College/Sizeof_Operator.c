#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("a allocated memory is: %d bytes", sizeof(a));                       //memory occupied by variable 'a'
    printf("\nInteger allocated memory is: %d bytes", sizeof(int));         //memory of integer
    printf("\nReal constant occupied memory is: %d bytes", sizeof(10.05));      //memory of float '10.05'
                                        //Here, %d is used because memory occupied by float is also in integer form
}