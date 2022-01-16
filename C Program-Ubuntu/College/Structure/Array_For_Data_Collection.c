/*Program to take different related data input using Different Arrays*/
#include <stdio.h>

int main()
{
    char name[3];
    float price[3];
    int page_num[3], i;

    printf("Enter the name, price and page number of 3 Books:\n");
    for(i = 0 ; i < 3; i++)
    {
        scanf(" %c%f%d", &name[i], &price[i], &page_num[i]);
    }
    printf("\nBook\tPrice\t\tPage Number:\n");
    for(i = 0; i < 3; i ++)
    {
        printf("%c\t%f\t\t%d\n", name[i], price[i], page_num[i]);
    }
}