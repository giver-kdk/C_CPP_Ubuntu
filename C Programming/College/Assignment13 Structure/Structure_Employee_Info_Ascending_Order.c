#include <stdio.h>
#include <conio.h>
#include <string.h>
#define n 3

struct employee
{
    char name[20];
    char address[50];
    float salary;
};

void main()
{
    struct employee e[n];
    struct employee temp;
    int i;
    float temp1;
    int j;
    for(i=0;i<n;i++)
    {
        printf("\n Enter information of employee%d",i+1);
        printf("\n Enter name:");
        scanf(" %s", e[i].name);
        printf("\n Enter address:");
        scanf(" %s", e[i].address);
        printf("\n Enter salary:");
        scanf("%f",&temp1);
        e[i].salary=temp1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(e[i].name, e[j].name)>0)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }

    }
    printf("\n Employee list in ascending order of name\n");
    printf("Emp. Name\t Address\t\t Salary");
    for(i=0;i<n;i++)
        printf("\n%s\t\t%s\t\t\t%.2f", e[i].name, e[i].address, e[i].salary);
    getchar();
}
