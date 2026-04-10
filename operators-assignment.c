/* ASSIGNMENT OPERATORS */
#include <stdio.h>

int main() 
{
    int a, b;

    a = 10;                                                                         // = assignment operator
    b = 5;

    printf("Initial values: a = %d, b = %d\n", a, b);

    a += b;
    printf("a += b (add AND) = %d\n", a);

    a = 10;
    a -= b;
    printf("a -= b (subtract AND) = %d\n", a);

    a = 10;
    a *= b;
    printf("a *= b (multiply AND) = %d\n", a);

    a = 10;
    a /= b;
    printf("a /= b (divide AND) = %d\n", a);

    a = 10;
    a %= b;
    printf("a %%= b (modulus AND) = %d\n", a);

    printf("a == b (equal to comparison) = %d\n", a == b);

    return 0;
}

/* OUTPUT:
Initial values: a = 10, b = 5
a += b (add AND) = 15
a -= b (subtract AND) = 5
a *= b (multiply AND) = 50
a /= b (divide AND) = 2
a %= b (modulus AND) = 0
a == b (equal to comparison) = 0
*/
