#include <stdio.h>
#include <math.h>
/*This program convert 24 hour format of time into AM/PM format. */
void main()
{
    int hrs,mins, hr;
    printf("Enter the time in 24 hrs(hour:minute) format: ");
    scanf("%d:%d", &hrs, &mins);
    hr=hrs-12;
    if(hrs>=12 && hrs<=24)
    {
        if(hrs==12)
        {
            printf("The time is %02d:%02d PM", hrs, mins);      /*here, '%02d' reserves 2 digit space for
                                                             answer and replaces leftover space with '0'*/
        
        }
        else if(hrs==24)
        {
            printf("The time is %02d:%02d AM", hr, mins);
        }
        else
        {
            printf("The time is %02d:%02d PM", hr, mins);
        }
    }
    else if(hrs<12)
    {
        printf("The time is %02d:%02d AM", hrs, mins);
    }
    else
    {
        printf("Invalid Time Entered.");
    }
}