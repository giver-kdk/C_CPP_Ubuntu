/*This program passes structure array address to a function to display it.*/
#include <stdio.h>

struct student
{
    char name[20];
    int roll_num;
}stu[5];                            //Global declaration of structure array

void create(struct student s[]);
int main()
{
    int i;
    printf("Enter details of 5 students\n");
    create(stu);                                //Function call by array name(reference)
    for(i = 0; i < 5; i++)
    {
        printf("Name: %s\n", stu[i].name);
        printf("Roll Number: %d\n", stu[i].roll_num);
    }
}
void create(struct student s[])
{
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Enter name of student: ");
        scanf("%s", s[i].name);               //Assign name to ith structure's name
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_num);
    }
}
