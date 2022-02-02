#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter any one digit number: ");
    scanf("%d", &num);
    switch(num)                     //Switch initialization for variable 'num'
    {
        case 0:                             //if 'num'==0, then this case will run
            printf("The number is Zero");
            break;          //'break' is needed to end the 'case0'. Otherwise it will continue upto 'case1'.
        case 1:
            printf("The number is One");
            break;
        case 2:
            printf("The number is Two");
            break;
        case 3:
            printf("The number is Three");
            break;
        case 4:
            printf("The number is Four");
            break;
        case 5:
            printf("The number is Five");
            break;
        case 6:
            printf("The number is Six");
            break;
        case 7:
            printf("The number is Seven");
            break;
        case 8:
            printf("The number is Eight");
            break;
        case 9:
            printf("The number is Nine");
            break;
        default:                                //if none of the case is satisfied, then 'default' case runs.
            printf("Invalid number entered!");       
                                                /*'default' doesn't have 'break' since there are no 
                                                further cases.*/
    }
}