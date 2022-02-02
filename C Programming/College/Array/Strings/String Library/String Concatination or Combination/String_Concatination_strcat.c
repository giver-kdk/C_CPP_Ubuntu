/*This program concatinates/combines strings using strcat function*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50] = "Hello ";
    char string2[50] = "World ";
    char string3[50] = "Earth";
    strcat(string1, string2);
    // strcat(string1, string3);        //Concatinates again

    printf("%s", string1);
}