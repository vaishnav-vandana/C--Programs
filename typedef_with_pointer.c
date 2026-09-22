/* TYPEDEF WITH POINTER */

#include <stdio.h>
typedef int *intPointer;

int main()
{
    int c = 89;
    intPointer a, b;

    a = &c;
    b = &c;

    printf("Value of c = %d\n", *a);

    return 0;
}

/*
OUTPUT :
Value of c = 89
*/

/*
NOTE :
// Without typedef
int * a,b ;          (a is pointer b is normal int)

// With typedef
typedef int*intPointer ;
intPointer a , b ;
(a is pointer b is also pointer because intPointer itself represent int *)
*/