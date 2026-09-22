/* FUCNTION POINTER (2) */
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning %d\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // testing the function
    int (*fptr)(int, int);                           // Declaring a function pointer
    fptr = &sum;                                     // Creating a function pointer
    int d = (*fptr)(4, 6);                           // Dereferencing a func pointer
    printf("The value of d is %d\n", d);
    return 0;
}

/*
OUTPUT :
The sum of 1 and 2 is 3
The value of d is 10
*/