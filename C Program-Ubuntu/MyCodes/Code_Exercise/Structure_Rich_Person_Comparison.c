/*This program uses struct person data type to create and print person's detail.
 Also, calculates person's average salary and compares the richer one.*/
#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[20];
    int age;
    char gender;
    float salary;
};

struct person create_person();
void print_person(struct person a);
int average(struct person a, struct person b);
struct person richer_person(struct person a, struct person b);

int main()
{
    struct person p1, p2;
    p1 = create_person();           //Structure variable created and returned by 'create_person' assigned in 'p1'
    p2 = create_person();
    printf("Details of 1st person:\n");
    print_person(p1);               
    printf("Details of 2nd person:\n");
    print_person(p2);
    printf("Average salary among two persons: %d", average(p1, p2));
    printf("\nRich person is:\n");
    print_person(richer_person(p1, p2));    //Prints the richer person returned by 'richer_person' function
}
struct person create_person()
{
    struct person a;
    printf("\nEnter person's name: ");
    scanf("%s", &a.name);
    printf("Enter age: ");
    scanf("%d", &a.age);
    printf("Enter gender: ");
    scanf(" %c", &a.gender);
    printf("Enter salary: ");
    scanf("%f", &a.salary);
    return(a);              //Return the created person
}
void print_person(struct person a)
{
    printf("Name: %s\tAge: %d\tGender: %c\tSalary: %f\n", a.name, a.age, a.gender, a.salary);
}
int average(struct person a, struct person b)
{
    int avrg;
    avrg = (a.salary + b.salary) / 2;       //Average value of two salaries
    return (avrg);
}
struct person richer_person(struct person a, struct person b)
{
    if(a.salary > b.salary)
    {
        return (a);         //Whole structure variable returned if rich
    }
    else if(b.salary > a.salary)
    {
        return (b);
    }
    else
    {
        printf("Both person have equal salary.");
        exit(0);                                //Since, no one is left to return. So, exit program
    }
}