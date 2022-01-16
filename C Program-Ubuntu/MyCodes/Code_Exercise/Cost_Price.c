#include<stdio.h>
int main()
{
    float sp,tp,tcp,cp;
    printf("Enter the total amount of 15 items ");
    scanf("%f",&sp);
    printf("Enter the total profit amount ");
    scanf("%f",&tp);
    tcp=sp-tp;
    cp=tcp/15;
    printf("The cost price of a item is %f",cp);
}