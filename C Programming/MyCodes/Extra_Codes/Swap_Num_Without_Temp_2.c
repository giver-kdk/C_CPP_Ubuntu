#include <stdio.h>
#include <stdlib.h>

/*This program interchanges the value of a and b without using extra temporary variables.*/
int main()
{
    int a=5, b=7;
    printf("a is %d", a);
    printf("\nb is %d", b);
   
    a = a + b;       //'a' becomes 5  + 7 = 12
    b = a - b;       //'b' becomes 12 - 7 = 5
    a = a - b;       //'a' becomes 12 - 5 = 7
    printf("\nNew a is %d", a);
    printf("\nNew b is %d", b);
 
}