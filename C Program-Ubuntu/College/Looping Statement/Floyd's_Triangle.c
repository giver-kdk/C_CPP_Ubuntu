#include <stdio.h>
#include <conio.h>

/*This Program prints the pattern:
            1
            2   3
            4   5   6
            7   8   9   10
            11  12  13  14  15          */
int main()
{
    int i, j=1, k;          // Value of 'j' assigned here.
    for(i=1; i<=5; i++)       
    {
        for(k=1; k<=i; j++, k++)     //Only 'k' initialized here. So, updated value of 'j' is preserved.
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}
/*Here, extra variable 'k' is used to proceed the inner loop and 'j' is declared outside the loop,
to continuously update without being restored to '1' at every loop.*/