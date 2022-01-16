/*This program defines a structure Student containing roll number, name, address and marks obtained in 5 subjects.
The address is a structure containing district, local level name and war number.
typedef is used to give type name to the structure and various functions are used like:
create_student, get_total_marks, get_percentage and average_percentage.*/
#include <stdio.h>

struct address      //Declare structure variable of type address
{
    char district[20];
    char local_level_name[20];
    int ward_num;
};
//typedef allows to cutomize data type name 
typedef struct stu   
{
    char name[20];
    int roll_num;
    struct address ad1;     //Nested structure variable
    float marks[5];
}student;               //Since, typedef is used. So, the name of this structure data type is 'student'
//NOTE: Here, student is not variable. But a data type name

student create_student();           //student equivalent to struct stu
float get_total_marks(student s);
float get_percentage(student s);
float average_percentage(student s[5]);

int main()
{
    student std[5];                 //Array of 5 student type variables
    int i;
    //Input Student Data
    for(i = 0; i < 5; i++)
    {
        printf("\nDetails of Student %d\n", i + 1);
        std[i] = create_student();
    }
    //Output Total Marks Obtained
    for(i = 0; i < 5; i++)
    {
        printf("Total marks of Student %d: %f\n", i + 1, get_total_marks(std[i]));
    }
    //Output Percentage
    for(i = 0; i < 5; i++)
    {
        printf("Percentage of Student %d: %f\n", i + 1, get_percentage(std[i]));
    }
    printf("Average percentage of 5 students: %f", average_percentage(std));
}
student create_student()
{
    student s;              //Declare student type variable
    int i;
    printf("Enter name: ");
    scanf("%s", s.name);        //'&' is not required for string input
    printf("Enter roll number: ");
    scanf("%d", &s.roll_num);
    printf("Enter district: ");
    scanf("%s", s.ad1.district);       //Accessing nested structure members 
    printf("Enter local level name: ");
    scanf("%s", s.ad1.local_level_name);
    printf("Enter ward number: ");
    scanf("%d", &s.ad1.ward_num);
    printf("Enter marks in 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%f", &s.marks[i]);
    }
    return(s);                  //Return student type variable
}
float get_total_marks(student s)
{
    float total = 0; 
    int i;
    for(i = 0; i < 5; i++)
    {
        total = total + s.marks[i];     //Access ith element of marks of student type structure variable
    }
    return(total);
}
float get_percentage(student s)
{
    float percentage;
    percentage = (get_total_marks(s) / 500) * 100;  //Utilize 'get_total_marks' function.Since, percentage = (total marks / 500) * 100
    return(percentage);
}
float average_percentage(student s[5])
{
    float total = 0, average;
    int i;
    for( i = 0; i < 5; i++)
    {
        total = total + get_percentage(s[i]);   //Add 'total' and percentage of ith student
    }
    average = total / 5;        
    return(average);
}