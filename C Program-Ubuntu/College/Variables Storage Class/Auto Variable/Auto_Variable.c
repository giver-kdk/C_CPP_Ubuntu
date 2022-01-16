#include <stdio.h>

/*Automatic Varialbe or Internal Variable*/
void main()
{
    auto int a, b;              //'auto' key is optional
    printf("%d \t %d", a, b);       //Since, no value assigned. So, gives Garbage Value
}