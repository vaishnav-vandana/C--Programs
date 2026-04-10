/*LOGICAL OPERATOR */
#include <stdio.h>

int main ()
{
    int a,b;
    a = 0;
    b = 1;

    printf("a&&b %d\n", a&&b);                                            // logical AND operator - both the operators are non zero (FALSE 0)
    printf("a||b %d\n", a||b);                                            // logical OR operator  - both the operators are non zero (TRUE 1)
    printf("!(a&&b) %d\n", !(a&&b));                                      // logical NOT operator - if condition is true than it print reverse of it.

    return 0 ;

}

/* OUTPUT :
a&&b 0
a||b 1
!(a&&b) 1
*/
