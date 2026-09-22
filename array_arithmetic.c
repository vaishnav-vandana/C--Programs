/* ARRAY ARITHMETIC IN C */

// ARRAY IN MEMORY
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40};
    printf("%d\n", arr[0]);
    printf("%d\n", *(arr));

    printf("%d\n", arr[1]);
    printf("%d\n", *(arr + 1));

    return 0;
}

/*
OUTPUT :
10
10
20
20
*/

/*
// NOTE:
// arr[i] == *(arr + i)
// 'arr' acts like pointer to first element
// Array elements are stored in contiguous memory
// Pointer arithmetic depends on data type size (int = 4 bytes usually)
*/