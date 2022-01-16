/*This program defines a structure of student having data members name, address, marks in C language, and 
marks in information system. Take data for n students in an array dynamically and find the total marks obtained.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    char address[20];
    float marks_c;
    float marks_info;
}*ptr;
int main()
{
    int num, i;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    float total[num];
    ptr = (struct student *) malloc(num * sizeof(struct student));
    printf("Enter students detail:\n");
    for(i = 0; i < num; i++)
    {
        printf("For student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", ptr[i].name);
        printf("Address: ");
        scanf("%s", ptr[i].address);
        printf("Marks in C Program: ");
        scanf("%f", &ptr[i].marks_c);
        printf("Marks in Information System: ");
        scanf("%f", &ptr[i].marks_info);
        total[i] = ptr[i].marks_c + ptr[i].marks_info;
    }
    printf("Enter studnet detail:\n");
    for(i = 0; i < num; i++)
    {
        printf("Name of student %d: \t\t\t%s\n", i + 1, ptr[i].name);
        printf("Address of student %d: \t\t\t%s\n", i + 1, ptr[i].address);
        printf("Marks in C program of student %d: \t%f\n", i + 1, ptr[i].marks_c);
        printf("Marks in Information System of student %d: %f\n", i + 1, ptr[i].marks_info);
        printf("Total Marks: \t\t\t\t%f\n", total[i]);
    }
}