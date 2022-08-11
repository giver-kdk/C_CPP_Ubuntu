#include <stdio.h>
#include <conio.h>

/*This program calculates percentage using only if statement*/
void main()
{
    int s1, s2, s3, s4, s5, per;
    printf("Enter the marks in five subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    per=(s1+s2+s3+s4+s5)/5;
    if(per>=60)
    {
        printf("First Division");
    }
    if(per>=50 && per<60)
    {
        printf("Second Division");
    }
    if(per>=40 && per<50)
    {
        printf("Third Division");
    }
    if(per<40)
    {
        printf("Fail");
    }
    getchar();

}