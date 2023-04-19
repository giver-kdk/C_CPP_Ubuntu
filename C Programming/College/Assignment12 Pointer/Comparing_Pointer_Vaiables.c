#include <stdio.h>
#include <conio.h>

void main()
{
    float a=10.5, b=10.5;
    float *f1,*f2;
    f1=&a;
    f2=&b;
    if(f1<f2)           //Comparing pointers(Addresses)
        printf("%u is less than %u",f1,f2);
    //This shows which address comes after another address
    if(f1>f2)
        printf("%u is greater than %u",f1,f2);
    if(f1==f2)
        printf("\n Impossible!!!");
    printf("\n %d", f1-f2);
}