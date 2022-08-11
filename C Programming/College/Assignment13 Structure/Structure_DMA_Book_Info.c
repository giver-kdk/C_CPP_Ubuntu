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
    struct book *bptr;
    float temp;
    bptr=(struct book *)malloc(sizeof(struct book));
    if(bptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\n Enter name:\t");
    scanf("%s", bptr->name);
    printf("\n Enter no. of pages:\t");
    scanf("%d", &bptr->pages);
    printf("\n Enter price:\t");
    scanf("%f", &temp);
    bptr->price=temp;
    printf("\n Name\t\t No. of Pages\t Price\n");
    printf("%s\t\t%d\t\t%f",(*bptr).name,(*bptr).pages,(*bptr).price);
    getchar();
}
