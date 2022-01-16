#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct  date
{
    int day;
    int month;
    int year;
};

struct name
{
    char first_name[10];
    char middle_name[10];
    char last_name[10];
};

struct personal_record
{
    float salary;
    struct date birthday,deathday;
    struct name full_name;
};
void main()
{
    struct personal_record person;
    printf("Enter first name:\t");
    scanf("%s", person.full_name.first_name);
    printf("Enter middle name:\t");
    scanf("%s", person.full_name.middle_name);
    printf("Enter last name:\t");
    scanf("%s", person.full_name.last_name);
    printf("\nEnter day of birthday:\t");
    scanf("%d", &person.birthday.day);
    printf("\nEnter month of birthday:\t");
    scanf("%d", &person.birthday.month);
    printf("\nEnter year of birthday:\t");
    scanf("%d", &person.birthday.year);
    printf("\nEnter day of death:\t");
    scanf("%d",&person.deathday.day);
    printf("\nEnter month of death:\t");
    scanf("%d",&person.deathday.month);
    printf("\nEnter year of death:\t");
    scanf("%d",&person.deathday.year);
    printf("\nEnter salary:\t");
    scanf("%f",&person.salary);
    printf("\nName:%s %s %s",person.full_name.first_name,person.full_name.middle_name,person.full_name.last_name);
    printf("\nBirthday:%d-%d-%d",person.birthday.month,person.birthday.day,person.birthday.year);
    printf("\nDeathday:%d-%d-%d",person.deathday.month,person.deathday.day,person.deathday.year);
    printf("\nSalary:%f",person.salary);
    getchar();
}
