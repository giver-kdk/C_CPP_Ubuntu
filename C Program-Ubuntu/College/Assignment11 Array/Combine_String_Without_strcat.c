/*Thi sprogram combines different strings without using string library strcat function*/
#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, k;
    char first_name[10] = "Lok" ;
    char middle_name[10] = "Prakash";
    char last_name[10] = "Pandey";
    char name[30];
    //Fill up first name
    for(i = 0; first_name[i] != '\0'; i++)
        name[i] = first_name[i];
    name[i] = ' ';                          //Insert space
    //Fill up middle name
    for(j = 0; middle_name[j] != '\0'; j++)
        name[i + j + 1] = middle_name[j];   //Value of 'i + 1' needed to continue after previous fill
    name[i + j + 1] = ' ';                  //Insert space
    //Fill up last name
    for(k = 0; last_name[k] != '\0'; k++)
        name[i + j + k + 2] = last_name[k];
    name[i + j + k + 2] = '\0';             //Stringify
    printf("%s", name);
    getchar();
}
