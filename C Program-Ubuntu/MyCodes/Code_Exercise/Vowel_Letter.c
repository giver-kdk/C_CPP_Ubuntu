#include <stdio.h>

/*This program counts the number of vowel letters entered.*/
int main()
{
    int i, count=0;
    char ch[10];                        //Array of '10' elements
    printf("Enter any 10 charcaters: ");
    for(i=0; i<10; i++)                     //Looping input for particular position of array
    {
        scanf(" %c", &ch[i]);               
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')      //Checks vowel
        {
            count++;
        }
    }
    printf("The number of vowel letters is %d", count);

}