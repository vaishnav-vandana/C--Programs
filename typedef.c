// TYPEDEF IN C

#include <stdio.h>
int main()
{
    typedef unsigned long ul;

    ul a = 5, b = 8;

    printf("a = %lu\n", a);
    printf("b = %lu\n", b);

    return 0;
}

/*
OUTPUT :
a = 5
b = 8
*/