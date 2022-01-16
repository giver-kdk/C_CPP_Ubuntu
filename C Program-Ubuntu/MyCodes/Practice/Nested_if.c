#include <stdio.h>
#include <conio.h>

void main()
{
    char ch1;
    printf("Enter any character: ");
    scanf("%c", &ch1);
    if(ch1>='0' || ch1<='9')
    {
        if(ch1<'5')             //if the above condition==True, then again check this condition
        {
            printf("The entered numerical character is less than 5");
        }
        else
        {
            printf("The entered numerical character is greater than 5 ");
        }
    }
    else if((ch1>='a' && ch1<='z') || (ch1>='A' && ch1<='Z') )
    {
        printf("The entered character is an Alphabet");
    }
    else{
        printf("The entered character is a Special Character");
    }
}