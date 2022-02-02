/*This program print entered number in to word form using Array of string.*/
#include <stdio.h>

int main()
{
    //Array of 10 strings with 50 character limit for each
    char string[10][50] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int index;
    printf("Enter any number between 0 - 9: ");
    scanf("%d", &index);
    if(index >= 0 && index <= 9)
    {
    printf("You Entered: %s", string[index]);       //'index' used to access array elements(strings)
    //NOTE: printf("You Entered: %s", string[index][50]); wont work!
    }
    else
    {
        printf("Invalid number! Choose between 0 -9.");
    }
}