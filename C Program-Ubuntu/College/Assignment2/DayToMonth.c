#include <stdio.h>
#include <conio.h>
void main()
{
int months, days;
//clrscr();
printf("Enter days\n");
scanf("%d", &days);
months=days/30;
days=days%30;
printf("Months=%d Days=%d", months, days);
getchar();
}
