/*This program reads different records dynamically */
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
    int n,i;
    float temp;
    printf("\nEnter how many records:\t");
    scanf("%d",&n);
    bptr=(struct book *)malloc(n*sizeof(struct book));
    for(i=0;i<n;i++)
    {
        printf("\n Enter name:\t");
        scanf(" %s", (bptr+i)->name);
        printf("\n Enter no. of pages:\t");
        scanf("%d", &(bptr+i)->pages);
        printf("\n Enter price:\t");
        scanf("%f", &temp);
        (bptr+i)->price=temp;
    }
    printf("\n Name\t\t No. of Pages\t Price\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%f\n", (bptr+i)->name, (bptr+i)->pages, (bptr+i)->price);
    }
    getchar();
}
