/*This program prints address and value of variable with pointer and 'value pointed by'(*) operator*/
#include <stdio.h>

int main()
{
    int num = 5, *ptr;
    ptr = &num;             //Refrencing - Initializing Pointer
    printf("\nValue of num is %d\n", num);
    printf("Content pointed by pointer is %d\n", *ptr);     //Here, '*' is value pointed by (operator) - Derefrencing
    printf("Address pointed by pointer is: %u\n", ptr);      //'ptr' shows stored address
    printf("Address of pointer is: %u\n", &ptr);            //Address of pointer variable itself
    printf("Value of num is %d", *(&num));                  //Value of address of 'num'
}