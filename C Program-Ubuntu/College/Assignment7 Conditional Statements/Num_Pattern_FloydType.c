#include <stdio.h>
#include <conio.h>

/*This program prints the number pattern: 
        1
		11	21
		31	41	51
		61	71	81	91*/
int main()
{
    int i, j=0, k, num;                 //'j' initialized here preserves its incremented value
    for(i=0; i<=4; i++)
    {
        for(k=1; k<=i; j++, k++)        //'k' only initialized here to control number of repeatation
                                        
        {
            num= (j*10)+1;
            printf("%d\t", num);
        }
        printf("\n");
    }
}