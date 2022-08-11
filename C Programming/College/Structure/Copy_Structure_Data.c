/*This program assign value of one structure variable to another of same structure data type*/
#include <stdio.h>
#include <string.h>

struct emp
{
    char name[20];
    int age;
    float salary;
}e1 = {"Ram", 21, 55000};
int main()
{
    struct emp e2, e3;
    strcpy(e2.name, e1.name);
    e2.age = e1.age;
    e2.salary = e1.salary;
    e3 = e2;
    printf("Detail of employee 1:\n");
    printf("\n%s\t%d\t%f", e1.name, e1.age, e1.salary);
    printf("\nDetail of employee 2:\n");
    printf("\n%s\t%d\t%f", e2.name, e2.age, e2.salary);
    printf("\nDetail of employee 3:\n");
    printf("\n%s\t%d\t%f", e3.name, e3.age, e3.salary);
}