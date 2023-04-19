#include <stdio.h>

/*This program prints whatever you type from the keyboard.*/
void main()
{
    char s[10];                     //[] mean string is an array of characters. If [10], then 
                                    //Only 10 character are allowed to be stored.

    //char s[10]={'g', 'i', 'v', 'e', 'r', '\0'};           //This simply stores 'giver' in 's'. 
                                                            //Here, '\0' is requred to denote ending of string.
    printf("Enter you name: ");
    //scanf("%s", s);       // String input don't need '&' for 's'.
                            //'%s' can't print full name cause it will stop reading input when whitespace comes
                        
    //scanf("^\n");              //This can print full name cause '^' means exclude. 
                                //The scanf("^\n") will read strings until a new line string comes.

    //gets(s);                   //gets(s) will read all type of strings including whitespace
                            //But, it doest check the limitation from [10].

    fgets(s, 10, stdin);    //fgets(str, limitation, input) can print with white spaces and check limitation.
                            //In fgets(s, 10, stdin), 's' is string, '10' is limit and 'stdin' is 
                            //standard input device(Keyboard)
    printf("My name is %s", s);

}