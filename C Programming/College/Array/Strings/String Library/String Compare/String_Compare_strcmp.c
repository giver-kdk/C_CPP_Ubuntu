/*This program compares 2 strings using standard strcmp function.
NOTE: In some PC, strcmp may only return -1, 0 and 1 for -ve, equal and +ve difference rather than actual ASCII difference.
****String comparison is useful for Password checking, Sorting strings in order, etc.****/
#include <stdio.h>
#include <string.h>

int main()
{
    int difference;
    char string1[50];
    char string2[50];
    //String Input
    printf("Enter 1st string: ");
    gets(string1);
    printf("Enter 2nd string: ");
    gets(string2);
    //Assign string difference
    difference = strcmp(string1, string2);
    //Conditional Output
    if(difference > 0)
    {
        printf("%s is greater than %s by ASCII value of %d", string1, string2, difference);
    }
    else if(difference < 0)
    {
        printf("%s is less than %s by ASCII value of %d", string1, string2, difference);
    }
    else
    {
        printf("%s is equal to %s", string1, string2);
    }

}