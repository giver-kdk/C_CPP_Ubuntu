#include <stdio.h>
#include <conio.h>
void main()
{
int a=10,b=5,c=20;
printf("\n a<b && a<c => %d", (a<b && a<c));
printf("\n a>b && b<c => %d", (a>b && b<c));
printf("\n a<b || a<c => %d", (a<b || a<c));
printf("\n a>b || b<c => %d", (a>b || b<c));
printf("\n a>c || b>c => %d", (a>c || b>c));
getchar();
}
