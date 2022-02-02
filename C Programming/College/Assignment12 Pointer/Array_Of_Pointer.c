#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5]={1,2,3,4,5};
    int *p[5];
    int i;
    for(i=0;i<5;i++)
        {
            p[i]=&a[i];
            printf("\np[%d]=%d",i,*p[i]);
        }
    getchar();
    }
