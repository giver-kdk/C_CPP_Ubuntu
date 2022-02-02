/*This program uses structure of employee having data members name, address, age and salary. 
Data for n employee in an array is taken dynamically and the average salary is calculated. */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct employee
{
    char name[20];
    char address[20];
    int age;
    float salary;
};
int main()
{
    int num, i;
    float total = 0;
    struct employee *ptr;
    printf("Enter the number of Employee: ");
    scanf("%d", &num);
    ptr = (struct employee *) malloc(num * sizeof(struct employee));
    if(ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter employee info:\n");
    for(i = 0; i < num; i++)
    {
        printf("For Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", ptr[i].name);
        printf("Address: ");
        scanf("%s", ptr[i].address);
        printf("Age: ");
        scanf("%d", &ptr[i].age);
        printf("Salary: ");
        scanf("%f", &ptr[i].salary);
    }
    printf("Employee Detail: \n");
    for(i = 0; i < num; i++)
    {
        printf("For Employee %d:\n", i + 1);
        printf("Name: %s\n", ptr[i].name);
        printf("Address: %s\n", ptr[i].address);
        printf("Age: %d\n", ptr[i].age);
        printf("Salary: %f\n", ptr[i].salary);
        total = total + ptr[i].salary;
    }
    printf("Average Salary is: %f", total / num);
}