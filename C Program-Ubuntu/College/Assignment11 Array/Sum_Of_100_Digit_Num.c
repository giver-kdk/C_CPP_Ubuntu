/*This program adds two 100 digit integers using Array and normal Mathematical Addition Logic*/
#include <stdio.h>
#define size 100

int main()
{
    int array1[200], array2[200];
    int addition[200] = {0};                //1st element zero. So, all elements become zero
    int i, j, sum = 0, remainder, carry_out = 0, choice, digit;
    //Input Integer
    printf("Enter two %d digit numbers.\n1) Enter all digits Manually\t2) Enter a single digit for whole Integer: ", size);
    scanf("%d", &choice);
    if(choice == 1)
    {   //Normal Array Input using for loop
        printf("Enter indiviual digits of first %d digit integer:\n", size);
        for(i = 0; i < size; i++)
        {
            scanf("%d", &array1[i]);
        }
        printf("Enter individual digits of second %d digit integer:\n", size);
        for(i = 0; i < size; i++)
        {
            scanf("%d", &array2[i]);
        }
    }
    else if(choice == 2)
    {   //Array Initialization using for loop
        printf("Enter a single number for 1st Integer: ");
        scanf("%d", &digit);
        for(i = 0; i < size; i++)
        {
            array1[i] = digit;      //Assign value of 'digit' to every index 
        }
        //Output Array to represent Integer Number
        printf("1st Integer is: \n");
        for(i = 0; i < size; i++)
        {
            printf("%d ", array1[i]);
        }

        printf("\nEnter a single number for 2nd Integer: ");
        scanf("%d", &digit);
        for(i = 0; i < size; i++)
        {
            array2[i] = digit;
        }
        printf("2nd Integer is: \n");
        for(i = 0; i < size; i++)
        {
            printf("%d ", array2[i]);
        }
    }
    //Number Adding Logic
    for(i = size; i >= 0; i--)      //Since, addition is done from last digit. So, 'i' decrements
    {
        sum = array1[i - 1] + array2[i - 1] + carry_out;        //Adding last digits of both numbers
        if(sum >= 10)
        {   //For sum being 2 digit number
            addition[i] = (sum % 10);                           //Last digit(remainder) is selected as addition result
            carry_out = (sum / 10);                             //First digit becomes carry out for next addition process
        }
        else
        {   //For sum being 1 digit number
            addition[i] = sum;                                  //The number is selected as addition result
            carry_out = 0;                                      //There is no carry out at this case
        }
    }
    //Output Added Integer Number
    printf("\nSum of two %d digit numbers is:\n", size);
    for(i = 0; i < size + 1; i++)
    {
        printf("%d ", addition[i]);
    }
}