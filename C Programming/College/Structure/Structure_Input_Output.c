/*This program initializes structure data type and allows input and output for variable of such data type.*/
#include <stdio.h>
#include <string.h>
//Generally structure data type is declared globally
struct student               //New data type 'struct student' is created containing roll_number and name as its members/elements
{
    int roll_num;
    char name[50];
} s1 = {1, "Giver"};        //Variable of 'struct student' data type can be intialized here as well

int main()
{   //Generally, structure type variable is declared here
    struct student s2 = {2, "Nirajan"}, s3, s4; 
    //s3 = {3, "Vision"};                            //Can't initialize like this    
    
    printf("\nRoll number of s1: %d", s1.roll_num);    //'.' operator is used to access the members of structure variable
    printf("\nName of s1: %s", s1.name);

    printf("\nRoll number of s2: %d", s2.roll_num);
    printf("\nName of s2: %s", s2.name);

    s3.roll_num = 3;
    //s3.name = "Vision";                           //Since string can't be assigned after declaration. So, gives error
    strcpy(s3.name, "Vision");                      //Use strcpy to assign string after declaration
    printf("\nRoll number of s3: %d", s3.roll_num);
    printf("\nName of s3: %s", s3.name);

    printf("\nEnter the roll number of s4: ");
    scanf("%d", &s4.roll_num);                       //Normal input like other variables
    printf("Enter the name of s4: ");
    scanf("%s", &s4.name);
    printf("Roll number of s4: %d", s4.roll_num);
    printf("\nName of s4: %s", s4.name);
}