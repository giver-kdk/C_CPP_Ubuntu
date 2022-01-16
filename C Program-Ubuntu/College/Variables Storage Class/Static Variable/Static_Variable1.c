#include <stdio.h>

int increment();                //Return type'int' by default
void main()
{
    increment();
    increment();
    increment();
    increment();
}
int increment()
{
    static int i=1;             //Static only initializes once
    /*static int i;
      i=1;
                        Here, static initializes once, but 'i=1' can initialize repeatedly*/
    printf("%d\n", i);
    i++;
}