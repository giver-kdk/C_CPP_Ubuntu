/*This program prints value address of a variable using pointer variable*/
#include <stdio.h>

int main()
{
    int a = 5, *p = &a;     //Pointer intialized  at the time of declaration
    //p = &a;           //Same as line: 5
    printf("The address of a is: %u\n", &a);        //'%u' used for printing addresses
    printf("The address of a is: %u\n", p);
    printf("The value of a is: %d\n", a);
    printf("The value of a is: %d\n", *p);
    printf("Address of pointer p is: %u", &p);
}