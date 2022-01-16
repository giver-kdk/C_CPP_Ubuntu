#include <stdio.h>
#include <conio.h>
void main()
{
unsigned int num1 = 57;             
unsigned int num2;

num2 = ~num1;       // anser should be negative for integer. But, we have used unsgned integer.

printf("num2=> %u", num2); // unsigned integer do no have negative range. So, this will give different result

getchar();
}

