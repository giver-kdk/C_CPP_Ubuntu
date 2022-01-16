#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll_num;
    int salary;
}stud[10];
void display(struct student s1, struct student s2, struct student s3, struct student s4, struct student s[10])      //Array index starts from 0 to 9
{   
    int i = 0, a, b, c;   
    char str1[20], str2[20], str3[20], str4[20], ch;     
    start:          
    printf("Enter name: ");    
    scanf("%s", s1.name);
    strcpy(str1, strlwr(s1.name));
    strcpy(str2, strlwr(s2.name));
    strcpy(str3, strlwr(s3.name));
    strcpy(str4, strlwr(s4.name));
    a = strcmp(str1, str2);
    b = strcmp(str1, str3);
    c = strcmp(str1, str4);
    if(a == 0 || b == 0 || c == 0)
    {
        printf("Enter Roll Number: ");
        scanf("%d", &s1.roll_num);
        if(s1.roll_num == 57 && a == 0)
        {
            printf("Your Salary is: %d", s2.salary);
        }
        else if(s1.roll_num == 58 && b == 0)
        {
            printf("Your Salary is: %d", s3.salary);
        }
        else if(s1.roll_num == 59 && c == 0)
        {
            printf("Your Salary is: %d", s4.salary);
        }
        else
        {
            printf("Invalid Roll Number");
        }
    }
    else
    {
        printf("Do you want to add %s vai as a new Employee?", s1.name);
        printf("\nPress 'y' for Yes\tPress 'n' for No");
        scanf(" %c", &ch);
        if(ch == 'y')
        {
            printf("Enter Roll Number: ");
            scanf("%d", &s[i].roll_num);
            printf("Enter Salary: ");
            scanf("%d", &s[i].salary);
            printf("You want to add more?");
            scanf(" %c", &ch);
            if(ch == 'y')
            {
                i++;
                goto start;
            }
            else if(ch == 'n')
            {
                strcpy(s[i].name, s1.name);
                printf("Name: %s", s[i].name);
                printf("\nRoll Number: %d", s[i].roll_num);
                printf("\nName: %d", s[i].salary);
                exit(0);
            }

        }
        else if(ch == 'n')
        {

        }
    }
}

int main()
{
    struct student a1, a2, a3, a4;                  
    strcpy(a2.name, "Ram");
    strcpy(a3.name, "Vam");
    strcpy(a4.name, "Aam");
    a2.roll_num = 57;
    a3.roll_num = 58;
    a4.roll_num = 59;
    a2.salary = 50000;
    a3.salary = 55000;
    a4.salary = 60000;
    display(a1, a2, a3, a4, stud);
}