#include <stdio.h>
void main()
{
    
    char ch;
    int a;
    
    printf("Enter a character");
    scanf("%c", &ch);           //notice there is no white space before %c. Since character input is at first
    printf("Enter a number");
    scanf(" %d", &a);
                                                //This will add ASCII value of individual characters
                                              //This will print the corresponding character of resultant ASCII value
    printf("\nNumber is %d"  , a);
    printf("\nCharcter is %c", ch);
                                        //For similar code, see Cprogramming\College\Character_Input.c

}