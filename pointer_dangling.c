/* DANGLING POINTER IN C */

/* Causes of dangling pointer */

#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a = 71, b = 16;
    int sum = a + b;
    return &sum;
}

int main()
{
    printf("Case 1 : De allocation of a memory block\n ");

    int *ptr = (int *)malloc(7 * sizeof(int));

    ptr[0] = 34;
    ptr[1] = 71;
    ptr[2] = 63;
    ptr[3] = 5;

    free(ptr); // ptr is now a dangling pointer
    ptr = NULL;

    printf("Case 2 : Function returning local variable address\n ");

    int *dangPtr = functionDangling(); // dangPtr is now a dangling pointer
    int *danglingPtr3;

    printf("Case 3 : If a variable goes out of the scope\n ");
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // Here variable goes out of scope which menas danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer .
    return 0;
}

// NOTE : It is a function in C (from <stdlib.h>) used to dynamically allocate memory during program execution.
//        malloc allocates a block of memory from the heap and returns a pointer to it.

/*
OUTPUT :
Case 1:
Memory allocated using malloc() is freed using free().
The pointer still holds the address, but memory is invalid → dangling pointer.
Case 2:
Function returns the address of a local variable (sum).
After function ends, the variable is destroyed → pointer becomes dangling.
Case 3:
Pointer stores address of a variable inside a block.
When block ends, variable goes out of scope → pointer becomes dangling.
*/