#include <stdio.h>

void main()
{
    static int a[4];                    //Array is static.So, default value is 0
    int i;
    for(i=0; i<=3; i++)
    {
        printf("%d\t", a[i]);
    }
}