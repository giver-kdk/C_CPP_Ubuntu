/*This program uses structure variable to store different related data*/
#include <stdio.h>

struct book
{
    char name;
    float price;
    int page_num;
};

int main()
{
    struct book b1, b2, b3;
    //Input Data
    printf("Enter the name, price and page number of 1st book:\n");
    scanf(" %c%f%d", &b1.name, &b1.price, &b1.page_num);
    printf("Enter the name, price and page number of 2nd book:\n");
    scanf(" %c%f%d", &b2.name, &b2.price, &b2.page_num);
    printf("Enter the name, price and page number of 3rd book:\n");
    scanf(" %c%f%d", &b3.name, &b3.price, &b3.page_num);
    //Output Data
    printf("\nBook\tPrice\t\tPage Number:\n");
    printf("%c\t%f\t\t%d\n", b1.name, b1.price, b1.page_num);
    printf("%c\t%f\t\t%d\n", b2.name, b2.price, b2.page_num);
    printf("%c\t%f\t\t%d\n", b3.name, b3.price, b3.page_num);
}