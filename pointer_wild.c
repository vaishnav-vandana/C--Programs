/* WILD POINTER IN C */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 27; // This is a wild pointer
    int *ptr;
    // *ptr = 34 ;                   // This is not a good thing to do
    ptr = &a; // Pointer is no longer a wild pointer

    printf("The value of a is %d\n", *ptr);

    return 0;
}

/*
OUTPUT :
The value of a is 27
*/