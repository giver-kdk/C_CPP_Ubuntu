#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct  date
{
    int day;
    int month;
    int year;
};

struct personal_record
{
    char name[20];
    float salary;
    struct date birthday,deathday;
};
void main()
{
    struct personal_record person;
    printf(" Enter name:\t");       
    scanf("%s", person.name);
    printf("\n Enter day of birthday:\t");
    scanf("%d", &person.birthday.day);
    printf("\n Enter month of birthday:\t");
    scanf("%d", &person.birthday.month);
    printf("\n Enter year of birthday:\t");
    scanf("%d", &person.birthday.year);
    printf("\n Enter day of death:\t");
    scanf("%d", &person.deathday.day);
    printf("\n Enter month of death:\t");
    scanf("%d", &person.deathday.month);
    printf("\n Enter year of death:\t");
    scanf("%d", &person.deathday.year);
    printf("\n Enter salary:\t");
    scanf("%f", &person.salary);
    printf("\n Name:%s", person.name);
    printf("\n Birthday:%d-%d-%d",person.birthday.month,person.birthday.day,person.birthday.year);
    printf("\n Deathday:%d-%d-%d",person.deathday.month,person.deathday.day,person.deathday.year);
    printf("\n Salary:%f",  person.salary);
    getchar();
}
