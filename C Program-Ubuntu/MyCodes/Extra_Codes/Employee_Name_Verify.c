#include <stdio.h>
#include <string.h>
#include <conio.h>

struct student
{
    char name[20];
    int roll_num;
    int salary;
};
void display(struct student s1, struct student s2, struct student s3, struct student s4)                         //Function with character pointer(string) as arguments
{   
    int a, b, c;   
    char str1[20], str2[20], str3[20], str4[20];               
    printf("Enter name: ");    
    gets(s1.name);
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
    display(a1, a2, a3, a4);
}