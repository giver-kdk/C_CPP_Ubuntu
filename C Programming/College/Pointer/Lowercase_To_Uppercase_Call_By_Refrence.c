/*Program to convert lowercase letter into uppercaes using call by reference*/
#include <stdio.h>

void low_to_up(char *ch);
int main()
{
    char character;
    printf("Enter lowercase character: ");
    scanf(" %c", &character);
    low_to_up(&character);
    printf("Uppercase is: %c", character);

}
void low_to_up(char *ch)
{
    if(*ch >= 97 && *ch <= 122)
    {
        *ch = *ch - 32;
    }
}