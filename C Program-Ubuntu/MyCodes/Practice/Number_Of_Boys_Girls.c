#include <stdio.h>
#include <conio.h>

int main()
{
    int remainder, bcount=0, gcount=0;
    long int code;
    printf("Enter code for boys and girls: ");
    scanf("%d", &code);
    while(code!=0)
    {
        remainder= code%2;
        if(remainder==0)
        {
            gcount++;
        }
        else
        {
            bcount++;
        }
        code=code/10;
    }
    printf("Number of boys: %d\n", bcount);
    printf("Number of girls: %d", gcount);
    getchar();
}