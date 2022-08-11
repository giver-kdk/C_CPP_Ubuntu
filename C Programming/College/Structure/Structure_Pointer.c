#include <stdio.h>

struct student
{
    char name[20];
    int roll_num;
};

int main()
{
    struct student s1, *ptr;
    ptr = &s1;
    printf("Enter name of student: ");
    scanf("%s", ptr->name);
    printf("Enter the roll number: ");
    scanf("%d", &ptr->roll_num);
    printf("Detail\n");
    printf("Name: %s\nRoll Number: %d\n", (*ptr).name, (*ptr).roll_num);
    printf("Name: %s\nRoll Number: %d", ptr->name, ptr->roll_num);
}