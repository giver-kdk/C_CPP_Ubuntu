#include <stdio.h>
#include <conio.h>

struct student 
{
    char *name;
    int *roll_num;
};
int main()
{
    struct student stu;
    printf("Size of stu: %d\n", sizeof(stu));
    printf("Enter name: ");
    scanf("%s", stu.name);
    printf("Enter roll number: ");
    scanf("%d", &stu.roll_num);
    printf("Student Name: %s\nRoll Number: %d", stu.name, stu.roll_num);
}