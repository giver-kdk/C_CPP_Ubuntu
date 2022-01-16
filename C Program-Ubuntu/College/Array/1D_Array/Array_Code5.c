#include <stdio.h>

void main()
{
    int a[10], i;
    for(i=0; i<=10; i++)       //In Boundry Checking, size of array is less than no. of iteration
                                //So, the extra input will give garbage output.
    {
        scanf("%d", &a[i]);
        printf("%d\n", a[i]);
    }
}