#include <stdio.h>

/*This program shows output using register variable*/

void main()
{
    register int i;                       //Stores value in CPU register(Fastest Memory)
    for(i=1; i<=5; i++)
    {
        printf("%d\n", i);
    }
}
/*NOTE: Memory of CPU register is limited. So, use this variable carefully.
If no memory available, then value stored in Main Memoy(RAM) */