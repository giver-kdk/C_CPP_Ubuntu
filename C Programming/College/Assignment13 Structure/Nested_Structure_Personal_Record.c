#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct personal_record
{
    char name[20];
    struct
    {
        int day_of_birth;
        int month_of_birth;
        int year_of_birth;
    }birthday;
    float salary;
}person;
void main()
{
    printf("Enter name:\t");               
    scanf("%s", person.name);
    printf("\nEnter day of birthday:\t");
    scanf("%d", &person.birthday.day_of_birth);
    printf("\nEnter month of birthday:\t");
    scanf("%d", &person.birthday.month_of_birth);
    printf("\nEnter year of birthday:\t");
    scanf("%d", &person.birthday.year_of_birth);
    printf("\nEnter salary:\t");
    scanf("%f", &person.salary);
    printf("\nName:%s",person.name);
    printf("\nBirthday:%d-%d-%d",person.birthday.month_of_birth,person.birthday.day_of_birth,person.birthday.year_of_birth);
    printf("\nSalary:%f", person.salary);
    getchar();
}
