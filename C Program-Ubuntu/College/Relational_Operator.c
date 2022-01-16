#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, lt, gt, lti, gti, it, nt;         //lt=less than, gt=greater than
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    lt=a<b;
    gt=a>b;
    lti=a<=b;                           
    gti=a>=b;
    it=a==b;                            //'=' is Assignment Operator and '==' is Relational Operator
    nt= a!=b;                        
    printf("lt= %d    \tgt= %d    \tlti= %d   \tgti= %d   \tit= %d    \tnt= %d",lt, gt, lti, gti, it, nt);
}

                                //The Output is in Boolean Form (1=True and 0=False)