#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

	if(n1 == 0) n1 = n2;
	else if(n2 == 0) n2 = n1;
	while(n1!=n2)
	{
		if(n1 > n2) n1 -= n2;
		else n2 -= n1;
	}
    printf("GCD = %d",n1);

    return 0;
}