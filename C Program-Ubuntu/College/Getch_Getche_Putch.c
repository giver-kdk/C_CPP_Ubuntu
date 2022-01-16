#include <stdio.h>
#include <conio.h>
void main()
{
    char ch1, ch2;
    printf("Enter any character ");
    ch1=getchar();                     //holds compiler until single charcater input. Doesn't show the input on screen
    printf("\nEnter any character ");
    ch2=getche();                       //holds compiler until single character input. Shows the input on screen
    printf("\nEntered first character is ");
    putch(ch1);                             //Displays output on screen
    printf("\nEntered second character is ");
    putch(ch2);

}