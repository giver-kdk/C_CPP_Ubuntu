#include <stdio.h>
void main()
{
    char c;
    int l_case_vowel, u_case_vowel;
    printf("Enter a letter from english alphabet:");
    scanf("%c",&c);
    l_case_vowel = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'); //reflect 1 if true
    u_case_vowel = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'); //reflect 1 if true
    if(l_case_vowel||u_case_vowel)
    {
        printf("%c is a vowel.",c);
    }
    else
    {
        printf("%c is a consonant.",c);
    }
}