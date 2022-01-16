#include <stdio.h>

union student
{
    char name[20];
    int roll_num;
};

int main()
{
    union student s1, *ptr;                       
    ptr = &s1;                                     
    printf("Enter name of student: ");
    scanf("%s", ptr->name);                         
    printf("\nName of the student is: %s", (*ptr).name);
    printf("\nName of the student is: %s", ptr->name);
    printf("\n\nEnter the roll number: ");
    scanf("%d", &ptr->roll_num);
    printf("\nRoll Number of the student is: %d", (*ptr).roll_num);
    printf("\nRoll Number of the student is: %d", ptr->roll_num);
    // printf("Name: %s\nRoll Number: %d\n", (*ptr).name, (*ptr).roll_num);     //Error: Only one union member can be assigned at a time
    // printf("Name: %s\nRoll Number: %d", ptr->name, ptr->roll_num);
}