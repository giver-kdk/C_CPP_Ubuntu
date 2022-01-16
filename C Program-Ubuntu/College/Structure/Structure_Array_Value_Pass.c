/*This program passes structure array value to a function to display it.*/
#include <stdio.h>

struct student
{
    char name[20];
    int roll_num;
}stu[5];                            //Global declaration of structure array

void display(struct student s);
int main()
{
    int i;
    printf("Enter details of 5 students\n");
    for(i = 0; i < 5; i++)
    {
        printf("Enter name of student: ");
        scanf("%s", stu[i].name);               //Assign name to ith structure's name
        printf("Enter Roll Number: ");
        scanf("%d", &stu[i].roll_num);
    }
    for(i = 0; i < 5; i++)
    {
        display(stu[i]);                    //Function call by value
    }
}
void display(struct student s)
{
    int i;
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_num);
}
