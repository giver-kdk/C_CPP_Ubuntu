#include <stdio.h>
void main()
{
    int a;
    char ch, sh, dh;
    float b;
    
    printf("Enter a number");
    scanf("%d", &a);
    printf("Enter a character");
    scanf(" %c", &ch);                              //notice the white space before %c
    printf("Enter another character");
    scanf(" %c", &sh);
    printf("Enter a float");
    scanf(" %f", &b);
    dh=ch+sh;                                       //This will add ASCII value of individual characters
    printf("\nCharacter sum is %c", dh);       //This will print the corresponding character of resultant ASCII value
    printf("\nNumber is %d   \nFloat is %f"  , a, b);
                                              //For similar code, see Cprogramming\College\Character_Input.c

}