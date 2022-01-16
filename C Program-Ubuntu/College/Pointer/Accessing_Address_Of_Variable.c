/*This program shows address of variables in order according to data type.
The difference of addresses depends upon size of variables*/
#include <stdio.h>

int main()
{
    int a = 5, b = 7;       //Here, Order of address according to order of declaration
    float c = 7.5;
    char ch = 'a';
    printf("Address of ch is: %u\n", &ch);      //Character needs 1 byte memory
    printf("Address of c is: %u\n", &c);        //Float needs 4 byte memeory
    printf("Address of b is: %u\n", &b);       //Integer needs 4 byte memeory
    printf("Address of a is: %u\n", &a);       
}