#include <stdio.h>
#include <string.h>

union student
{
    char name[20];
    int roll_num;
};

void display(union student s)                         //Function with character pointer(string) as arguments
{                           
    printf("\nName: %s\n", s.name);
    printf("Roll Number: %d", s.roll_num);
}

int main()
{
    union student s1;                  
    strcpy(s1.name, "Ram");
    display(s1);
    s1.roll_num = 10;
    display(s1);
}