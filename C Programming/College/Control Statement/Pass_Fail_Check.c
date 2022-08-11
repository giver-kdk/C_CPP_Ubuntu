#include <stdio.h>
#include <conio.h>

void main()
{
    int s1, s2, s3, s4, s5, per;
    printf("Enter the marks obtained in five subjects: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    per= (s1+s2+s3+s4+s5)/5;
    if(per>=80 && per<100)
    {
        printf("Distinction");
    }
    else if(per>=70 && per<80)
    {
        printf("First Division");
    }
    else if(per>=60 && per<70)
    {
        printf("Second Division");
    }
    else if(per>=50 && per<60)
    {
        printf("Third Division");
    }
    else
    {
        printf("Very Bad!");
    }
    printf("\nYour percentage is: %d", per);
    if(s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
    {
        printf("\nPass");
    }
    else
    {
        printf("\nFail");
    }
    getchar();

}