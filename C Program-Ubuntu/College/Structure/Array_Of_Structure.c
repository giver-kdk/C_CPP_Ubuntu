/*This program shows input and output method for array of structure variables*/
#include <stdio.h>

struct employee
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct employee emp[5];     //Structure array of 5 employee data type
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter name, age and salary of Employee%d: ", i + 1);
        scanf("%s%d%f", &emp[i].name, &emp[i].age, &emp[i].salary);     
    }
    printf("The detail of employee is:\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nName of Employee%d: %s", i + 1, emp[i].name);     //emp[i].name to access name of ith employee
        printf("\nAge of Employee%d: %d", i + 1, emp[i].age);
        printf("\nSalary of Employee%d: %f\n", i + 1, emp[i].salary);
    }
}