#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    int a[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};    
    for(i=0; i<=9; i++)
    {
        printf("a[%d]= %d\t", i, a[i]);             //Accesses element through index
    }
}