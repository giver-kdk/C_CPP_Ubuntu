#include <stdio.h>
#include <conio.h>
void main()

{
    int n1=57, n2;
    n2= n1<<2;                      //shifting the binary bits towards left by 3 units
    printf("The left shifted value is %d", n2);     //Result is the decimal value of shifted binary bit
    n2= n1>>2;                      //shifting the binary bits towards right by 3 units
    printf("\nThe right shifted value is %d", n2);
}