#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct employee
{
    char name[20];
    int id;
    float salary;
};
void display(struct employee *e);
void main()
{
    struct employee emp;
    printf("Employee name:\t");
    scanf("%s",emp.name);
    printf("\nEmployee id:\t");
    scanf("%d",&emp.id);
    printf("\nEnter salary of employee:\t");
    scanf("%f",&emp.salary);
    display(&emp);
    printf("\n\n\nAfter function call\n");
    printf("\nName\t\t\tID\t\tSalary\n");
    printf("%s \t\t\t %d \t %.2f",emp.name,emp.id,emp.salary);
    getchar();
}

void display(struct employee *e)
{
    printf("\nName\t\tID\t\tSalary\n");
    printf("%s\t\t%d\t\t%.2f",e->name,e->id,e->salary);
    strcat(e->name," Prakash");
    e->id=e->id+100;
    e->salary=e->salary+500;
}
