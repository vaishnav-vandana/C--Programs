/* UNIONS IN C */

#include <stdio.h>
#include <string.h>

union Book
{
    int pages;
    float price;
    char title[20];
};

int main()
{
    union Book b1;
    b1.pages = 100;
    printf("Pages : %d\n", b1.pages);

    b1.price = 250.00;
    printf("Price : %.1f\n", b1.price);

    strcpy(b1.title, "C programming");
    printf("Title : %s\n", b1.title);

    return 0;
}

/*
OUTPUT :
Pages : 100
Price : 250.0
Title : C programming
*/