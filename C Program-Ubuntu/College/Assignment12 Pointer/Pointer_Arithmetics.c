#include <stdio.h>
#include <conio.h>

void main()
{
    float *f, x;
    int i;
    f=&x;
    printf("Enter x:\t");
    scanf("%f", f);
    printf("\n The value of x is %f\n",*f);
    printf("\n Address of x:%u\n", f);
    for(i=0;i<5;i++)
    {
        printf("%u\t", f++);
    }
    getchar();
}
