/*Program to take uppercase input only*/
#include <stdio.h>

int main()
{
    char name[50], caste[50];
    printf("Enter your name: ");
    
    // scanf("%[A-Z]", name);         //Allows Capital Letters Only   
    // scanf("%[^a]", name);          //Allows selected letter only(i.e; 'a')
    // scanf("%[A-Z a-z]", name);     //Allows Capital, Small Letters and Whitespace
    // scanf("%[A-Za-z]", name);         //Allows Capital and Small letters
    scanf("%[^\n]", name);         //Allows all characters except new line
    printf("Enter your caste: ");
    //New line can't be read by other scanf. So, read manually for next input
    scanf("\n"); 
    scanf("%[^\n]", caste);                                                   
    printf("Your full name is: %s %s", name, caste);
}