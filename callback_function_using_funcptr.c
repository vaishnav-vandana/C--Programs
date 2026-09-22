/* CALLBACK FUNCTION USING FUNC POINTER IN C */

#include <stdio.h>
void A()
{
    printf("I am function A\n");
}
// Callback function
void B(void (*ptr)())
{
    (*ptr)(); // Callback to A
}

int main()
{
    void (*ptr)() = &A;
    // Calling function B and passing
    // Address of the function A as argument
    B(ptr);
    return 0;
}

/*
OUTPUT :
I am function A
*/