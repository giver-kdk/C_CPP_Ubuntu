#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    unsigned int a[3]={1,2,3};
    int i;
    memset(a,5,3);
    for(i=0;i<3;i++)
        printf("%u ",a[i]);
    getchar();
}
