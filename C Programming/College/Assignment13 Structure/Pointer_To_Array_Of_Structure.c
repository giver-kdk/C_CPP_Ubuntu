/*This program shows pointer to array of structure*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct book
{
    char name[20];
    int pages;
    float price;
};
void main()
{
    struct book b[2], *bptr;
    float temp;
    bptr=b;
    for(bptr=b;bptr<b+2;bptr++)                     //Efficient way to use for loop using pointer to structure
    {
        printf("\n Enter name:\t");
        scanf("%s",bptr->name);
        printf("\n Enter no. of pages:\t");
        scanf("%d",&bptr->pages);
        printf("\n Enter price:\t");
        scanf("%f",&temp);
        bptr->price=temp;
    }
    printf("\n Name\t\tNo. of Pages\tPrice\n");
    for(bptr=b;bptr<b+2;bptr++)
    {
        printf("\n%s\t\t%d\t\t%f\n", bptr->name, bptr->pages, bptr->price);
        printf("%s\t\t%d\t\t%f", (*bptr).name, (*bptr).pages, (*bptr).price);
    }
}
