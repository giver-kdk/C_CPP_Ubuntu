/*This program shows that the global variable is valid from the position where it is defined*/
#include <stdio.h>
#include <conio.h>

int y;
void function()
{
    y=y+1;
    printf("%d\n", y);
}
void main()
{
    y=100;
    function();
    getchar();
}
// This Code wil give Error since y is declared only above main
// #include <stdio.h>
// #include <conio.h>
// void function()
// {
//     y=y+1;
//     printf("%d\n", y);
// }
// int y;
// void main()
// {
//     y=100;
//     function();
//     getch();
// }
//Error
