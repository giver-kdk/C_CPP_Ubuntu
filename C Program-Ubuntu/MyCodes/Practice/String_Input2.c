#include <stdio.h>
void main()
{
    char s[10];                         //String is just an array of characters.
    printf("Enter you name: ");
    scanf("%[A-Z]", s);              //String input doesn't require '&' before 's'.
                                    //'%[A-Z]' only reads strings from A to Z
                                   // %[A-Z] will stop reading when string excluding from A-Z comes

    printf("My name is %s", s);

}