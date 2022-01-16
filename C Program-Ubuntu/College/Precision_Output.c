#include <stdio.h>
void main()
{
    int a=20;
    float b=22.1234567;
    printf("%-4d", a);              //Left Align
    printf("\n%06d", a);            //Right Align. 0 in place of blank space
    printf("\n%+4d", a);            //Right Align
    printf("\n%d", a);              //Normal Output
    printf("\n%7.3f", b);           //Three digits of precision. 
                                    //Front number'7' before point(.) indicates field width including decimal points
}