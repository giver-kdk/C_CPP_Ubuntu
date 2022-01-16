/*This menu driven program performs the following jobs:
- Create a structure named student with member variables: roll, name, grade, gender, age.
- Define ten structure variables of type student and using loop take input for all ten structure variables.
- Display names of all male students.
- Exit.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 10

struct student
{
    char name[20];
    int roll_num;
    int grade;
    char gender;
    int age;
};
void input_info(struct student s[]);
void display(struct student s);

int main()
{
    int i;
    struct student s1[SIZE];
    start:
    printf("Select your choice: ");
    char choice, ch;
    printf("1) Input student detail\t2) Print student detail\t3) Exit: ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case '1':
            printf("Enter student detail:\n");
            input_info(s1);
            printf("Wanna print male students? Press y or n: ");
            scanf(" %c", &ch);
            if(ch == 'y')
            {
                for(i = 0; i < SIZE; i++)
                {
                    if(s1[i].gender == 'M' || s1[i].gender == 'm')
                    {
                        printf("%s\n", s1[i].name);
                    }
                }
            }
            goto start;
            break;
        case '2':
            printf("Entered student Information:\n");
            for(i = 0; i < SIZE; i++)
            {
                printf("For student %d\n", i + 1);
                display(s1[i]);
            }
            goto start;
            break;
        case '3':
            exit(1);
            break;
        default:
            printf("Invalid Choice!");
            goto start;
    }
    
}
void input_info(struct student s[])
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        printf("For student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll_num);
        printf("Enter grade: ");
        scanf("%d", &s[i].grade);
        printf("Enter gender: ");
        scanf(" %c", &s[i].gender);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }
}
void display(struct student s)
{
    printf("Students Information:\n");
    printf("Name: %s\n", s.name);       
    printf("Roll Number: %d\n", s.roll_num);       
    printf("Grade: %d\n", s.grade);       
    printf("Gender: %c\n", s.gender);       
    printf("Age: %d\n", s.age);       
}