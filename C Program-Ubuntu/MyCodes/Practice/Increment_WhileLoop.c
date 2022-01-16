#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    while (a<100)       
    {
        a++;
        printf("%d", a);
    }                           //This will print incremneted number of a  until a<100 is True
}
