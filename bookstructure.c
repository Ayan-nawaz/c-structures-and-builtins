#include <stdio.h>
#include <string.h>

struct book
{
    char name[20];
    int no_of_pages;
    float price;
};

int main()
{
    struct book a, b, c;

    a.no_of_pages = 100;
    a.price = 441.5;

    strcpy(a.name, "seven");

    printf("Book Name : %s\n", a.name);
    printf("No. of Pages : %d\n", a.no_of_pages);
    printf("Price : %.2f\n", a.price);

    char ch[43];
    strcpy(ch, "secret seven");

    printf("%s\n", ch);

    return 0;
}