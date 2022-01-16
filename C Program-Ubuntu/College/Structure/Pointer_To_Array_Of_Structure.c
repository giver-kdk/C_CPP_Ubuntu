#include <stdio.h>

struct student 
{
    char name[20];
    int roll_num;
};
int main()
{
    struct student stu[5], *ptr;
    printf("Enter name and roll number of 5 students\n");
    for(ptr = stu; ptr < stu + 5; ptr++)
    {
        printf("Enter Name:");
        scanf("%s", ptr->name);
        printf("Enter roll number: ");
        scanf("%d", &ptr->roll_num);
    }
    for(ptr = stu; ptr < stu + 5; ptr++)
    {
        printf("Name: %s\nRoll Number: %d\n", ptr->name, ptr->roll_num);
    }

}
