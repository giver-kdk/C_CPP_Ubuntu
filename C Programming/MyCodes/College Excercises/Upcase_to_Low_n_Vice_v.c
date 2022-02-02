#include <stdio.H>

int main()
{
    char ch;
    printf("Enter a single character: ");
    scanf(" %c", &ch);
    if(ch>=65 && ch<=90)        //Charcters within this range of ASCII value are Capital Alphabets.
    {
        printf("The charcter is an Uppercase Charcter.");
        ch=ch+32;      //Gives lower case of alphabet by skipping forward 32 characters in ASCII table.
        printf("\nIts lower case is %c", ch);
    }
    else if(ch>=97 && ch<=122)       //Charcters within this range of ASCII value are Capital Alphabets.
    {
        printf("The character is Lowercase Character");
        ch=ch-32;       //Gives upper case of alphabet by skipping backward 32 characters in ASCII table.
        printf("\nIt's upper case is %c", ch);
    }
    else
    {
        printf("Invalid Input!");
    }
}
