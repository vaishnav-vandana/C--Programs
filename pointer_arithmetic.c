// POINTER ARITHMETIC IN C

// Basic operations in pointer aritmetic

#include <stdio.h>
int main()
{
    printf("1. Increment operation : \n"); // Moves pointer to the next memory location
    int arr1[] = {10, 20, 30};

    int *ptr1 = arr1;
    printf("%d\n", *ptr1);
    ptr1++;
    printf("%d\n", *ptr1);

    printf("2. Decrement operation : \n"); // Moves pointer to the previous memory location
    int arr2[] = {40, 50, 60};

    int *ptr2 = &arr2[2];
    printf("%d\n", *ptr2);
    ptr2--;
    printf("%d\n", *ptr2);

    printf("3. Addition with pointer : \n");
    int arr3[] = {5, 10, 15, 20};

    int *ptr3 = arr3;
    ptr3 = ptr3 + 2; // ptr+2 means move 2 integer position forward
    printf("%d\n", *ptr3);

    printf("4. Subtracton with pointer : \n");
    int arr4[] = {25, 30, 35, 40};

    int *ptr4 = &arr4[3];
    printf("%d\n", *ptr4);
    ptr4 = ptr4 - 2;
    printf("%d", *ptr4);

    return 0;
}

/*OUTPUT :
1. Increment operation :
10
20
2. Decrement operation :
60
50
3. Addition with pointer :
15
4. Subtracton with pointer :
40
30
*/

/*
NOTE : Pointer arithmetic depends on data type size
// int pointer - moves 4 bytes
// char pointer - moves 1 bytes
// float pointer - moves 4 bytes
[IT DEPENDS ON ARTHITECTURE TO ARCHITECTURE]
*/

/*
INVALID POINTER OPERATION
// Addition of two pointer (p+q)
// Multiplication of two pointer (p*q)
// Division of two pointer (p/q)
// Multiply pointer with integer (p*7)
[SUBTRACTION ONLY WHEN BOTH POINTERS BELONG TO SAME ARRAY]
*/