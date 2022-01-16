/*This program shows that static variable is declared and defined only once.
Hence, its value is preserved*/
#include <stdio.h>
#include <conio.h>
void stat()
{
    static int x=0;
    x=x+1;
    printf("x=%d\n", x);
}
void main()
{
int i;
for(i=1;i<=3;i++)
	stat();
getchar();
}


// #include <stdio.h>          //This shows normal variable being frequently declared and defined
// #include <conio.h>
// void stat()
// {
//     int x=0;
//     x=x+1;
//     printf("x=%d\n", x);
// }
// void main()
// {
// int i;
// for(i=1;i<=3;i++)
// 	stat();
// getch();
// }



