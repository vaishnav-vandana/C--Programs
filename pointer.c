// POINTER IN C

#include <stdio.h>

int main()
{
    int a = 10;  // a stores value 10
    int *p = &a; // &a gives addresss of a and p stores that address

    printf("%d\n", a);  // prints value of a
    printf("%p\n", &a); // prints address of a
    printf("%p\n", p);  // prints stored address
    printf("%d\n", *p); // prints value at stored address which is value of a

    return 0;
}

/*
OUTPUT
10
000000a2b0dff694
000000a2b0dff694
10
*/