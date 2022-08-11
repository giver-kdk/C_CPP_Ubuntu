#include <stdio.h>
void main()
{
    int a;
    char ch;
    printf("Enter a number");
    scanf("%d", &a);
    printf("Enter a character");
    scanf(" %c", &ch);                          //Notice the whitespace before %C 
    printf("\nNumber: %d\tCharcater: %c", a, ch);   
                            /*On line 9, Since character input function(scanf)
                             is below the integer input function(scanf), so the integer will return(provide) a value 
                              automatically to the input of character(scanf). So, to allow the user input, 
                              we give white space before %c due to which whitespace will be ignored(hence the return 
                              value will be ignored) and %c will be ready for user input*/

}
                            //For similar code, see Cprogramming\MyCodes\Character_Input1.c