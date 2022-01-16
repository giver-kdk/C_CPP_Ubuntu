#include <stdio.h>
#include <conio.h>

int main()
{
    int temporary, remainder, bcount=0, gcount=0, i, j, count=0;
    long int code;
    int number[100];
    printf("Enter code for boys and girls: ");
    scanf("%d", &code);
    temporary= code;
    while(code!=0)
    {
        code=code/10;
        count++;
    }
    code= temporary;
    while(code!=0)
    {
        remainder= code%2;
        for(i=1; i<=count; i++)
        {
            number[i]= remainder;
        }
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