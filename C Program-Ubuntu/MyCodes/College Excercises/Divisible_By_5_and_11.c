/*Check if user given input is exactly divisible by 5 or 11 using nested if else statement*/
#include <stdio.h>

int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    if(number% 5== 0 || number% 11== 0)             //Checks if atleast one condition is satified or not
    {
        if(number% 5== 0 && number% 11== 0)         //Checks if both condition is satified or not
        {
            printf("The number is exactly divisible by 5 and 11");
        }
        else if(number% 5== 0)                      //Checks if divisible by 5
        {
            printf("The number is exactly divisible by 5");
        }
        else                         //If none of above two conditions satisfies, then only divisible by 11
        {
            printf("The number is exactly divisible by 11");
        }        
    }
}