/* VOID POINTER IN C */

#include <stdio.h>

int main()
{
    int a = 78;
    float b = 8.5;
    void *ptr;

    ptr = &a;
    ptr = &b;
    printf(" The vlaue of a is %d\n", *((int *)ptr));
    printf(" The value of b is %f\n", *((float *)ptr));

    return 0;
}

/*
OUTPUT :
 The vlaue of a is 1091043328
 The value of b is 8.500000
*/