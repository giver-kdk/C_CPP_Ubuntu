/*This program creates a structure named date that has day, month and year as its members. 
Include this structure as a member in another structure named employee which has name, 
id and salary as other members. Use this structure to read and display employee’s name, id, date of birthday and salary.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[20];
    int id;
    float salary;
    struct date d1;
};
int main()
{
    struct employee e1;
    printf("Enter employee name: ");
    gets(e1.name);
    printf("Enter employee ID Number: ");
    scanf("%d", &e1.id);
    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);
    printf("Enter day of birth: ");
    scanf("%d", &e1.d1.day);
    printf("Enter month of birth: ");
    scanf("%d", &e1.d1.month);
    printf("Enter year of birth: ");
    scanf("%d", &e1.d1.year);
    printf("Employee Detail:\n");
    printf("Name: %s\n", e1.name);
    printf("ID Number: %d\n", e1.id);
    printf("Salary: %f\n", e1.salary);
    printf("Date of birth: %d-%d-%d\n", e1.d1.day, e1.d1.month, e1.d1.year);
}