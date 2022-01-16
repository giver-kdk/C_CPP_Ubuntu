#include <stdio.h>


char* strlwr(char x[])					// Defining strlwr() function 
{
  int b;
  for(b=0;x[b]!='\0';b++)
  {
    if(x[b]>='A'&&x[b]<='Z')
    {
      x[b]=x[b]-'A'+'a';
    }
  }
  return x;
}

char* strupr(char x[])					// Defining strupr() function 
{
  int b;
  for(b=0;x[b]!='\0';b++)
  {
    if(x[b]>='a'&&x[b]<='z')
    {
      x[b]=x[b]-'a'+'A';
    }
  }
  return x;
}

int main()
{
	char string[20];
	printf("Enter upper case word: ");
	scanf("%s", string);
	printf("Entered string: %s\n", string);
	printf("Lowercase string: %s\n", 	strlwr(string));
	printf("Uppercase string: %s", 	strupr(string));
	printf("\n");
}