#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter any character");
    ch=getchar();                       //holds the compiler until it gets input from the keyboard
    printf("Entered charcter is ");
    putchar(ch);                        //displays output on screen in unformatted form. 
                                        //putchar(ch); is equivalent to printf("%c", ch);
}           
           