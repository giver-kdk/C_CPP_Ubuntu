#include <stdio.h>
void main()
{
    int a=0X234;                //Since 0X is before number. So, this is already a Hexadecimal Number
    int b=20;
    printf("%#o", a);           //The # before 'o' puts 0 infront of the result
    printf("\n%#X", a);         //The # before 'X' puts 0X infront of the result
    printf("\n%#o", b);
    printf("\n%#X", b);
                                //  NOTE:   Both 'x' and 'X' is allowed for Hexadecimal.
                                //          We prefer Capital'X'.
}