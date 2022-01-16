#include <stdio.h>
#include <conio.h>

int main()
{
    int overpay, work, overwork, i;
    for(i=1; i<=10; i++)
    {
        printf("Enter the number of working hours of employee %d: ", i);
        scanf("%d", &work);
        if(work>40)
        {
            overwork= work-40;
            overpay= 12*overwork;
            printf("Overtime pay of employee %d is %d\n", i, overpay);
        }
        else
        {
            printf("Employee %d haven't overworked.\n", i);
        }
    }
    getchar();
}