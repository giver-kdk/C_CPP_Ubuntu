#include <stdio.h>

void main()
{
    int year, month, day;
    printf("Enter the date in YYYY/MM/DD format: ");
    scanf("%d/%d/%d", &year, &month, &day);
    if(day>31)                  //Checks if the date entered is within 31
    {
        printf("The date is invalid");
    }
    else
    {
    switch(month)
    {
        case 1:
            printf("The date is %dth day of January, %d.", day, year); //if month==1, then prints this block
            break;
        case 2:
            printf("The date is %dth day of February, %d.", day, year);
            break;
        case 3:
            printf("The date is %dth day of March, %d.", day, year);
            break;
        case 4:
            printf("The date is %dth day of April, %d.", day, year);
            break;
        case 5:
            printf("The date is %dth day of May, %d.", day, year);
            break;
        case 6:
            printf("The date is %dth day of June, %d.", day, year);
            break;
        case 7:
            printf("The date is %dth day of July, %d.", day, year);
            break;
        case 8:
            printf("The date is %dth day of Auguts, %d.", day, year);
            break;
        case 9:
            printf("The date is %dth day of September, %d.", day, year);
            break;
        case 10:
            printf("The date is %dth day of October, %d.", day, year);
            break;
        case 11:
            printf("The date is %dth day of November, %d.", day, year);
            break;
        case 12:
            printf("The date is %dth day of December, %d.", day, year);
            break;
        default:
            printf("The date is Invalid");
    }
    }
}