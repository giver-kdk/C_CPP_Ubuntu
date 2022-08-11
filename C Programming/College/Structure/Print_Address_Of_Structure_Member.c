/*This program shows addresses of structure members are in sequence*/
#include <stdio.h>

int main()
{
    struct book     //Declaring data type 'struct book'
    {
        char name;
        float price;
        int page_num;
    };
    struct book b1 = {'A', 102.5, 102};     //Structure variable initialization
    // struct book b1 = {'A'};     //The uninitialized member will have default value 0 for float and integer
    //NOTE: Uninitialized character member will have default value '\0'
    printf("\nAddress of name: %u", &b1.name);
    printf("\nAddress of price: %u", &b1.price);
    printf("\nAddress of page number: %u", &b1.page_num);
    
    printf("\nName: %c", b1.name);
    printf("\nPrice: %f", b1.price);
    printf("\nPage Number: %d", b1.page_num);
    //Addresses are in sequence
}