/*This program uses function pointer to point to different functions as required*/
#include <stdio.h>

void print_product(int a, int b);
void print_sum(int a, int b);
void do_something(int a, int b, void (*fun)(int, int));     //Contains pointer function as parameter

int main()
{
    void (*fptr)(int, int);                     //Declaring pointer function
    fptr = print_product;                       //Initializing pointer function
    //Use a single function to do multiple task
    do_something(5, 4, print_product);          //Contains function as parameter
    do_something(5, 4, print_sum);
}
void print_product(int a, int b)
{
    printf("\nProduct = %d", a * b);
}
void print_sum(int a, int b)
{
    printf("\nSum = %d", a + b);
}
void do_something(int a, int b, void (*fun)(int, int))
{
    fun(a, b);      //Calls the function pointed by 'fun' with 'a' and 'b' as parameters
}