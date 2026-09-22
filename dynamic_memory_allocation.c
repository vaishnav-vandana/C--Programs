/* DYNAMIC MEMORY ALLOCATION : malloc , calloc , realloc , free */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" DYNAMIC MEMORY ALLOCATION (malloc, calloc, realloc, free) \n");

    int *ptr;
    int n, newSize;

    // ===== MALLOC =====
    printf("Enter size for malloc array:\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int)); // allocate memory (garbage values)

    if (ptr == NULL)
    {
        printf("Memory not allocated!\n");
        return 0;
    }

    // Input values
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d:\n", i);
        scanf("%d", &ptr[i]); // store using pointer
    }

    // Output values
    printf("\nValues using malloc:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Index %d -> %d\n", i, ptr[i]); // print values
    }

    // ===== CALLOC =====
    printf("\nEnter size for calloc array:\n");
    scanf("%d", &n);

    free(ptr); // free old memory (avoid memory leak)

    ptr = (int *)calloc(n, sizeof(int)); // allocate + initialize to 0

    if (ptr == NULL)
    {
        printf("Memory not allocated!\n");
        return 0;
    }

    // Input values
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d:\n", i);
        scanf("%d", &ptr[i]);
    }

    // Output values
    printf("\nValues using calloc:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Index %d -> %d\n", i, ptr[i]);
    }

    // ===== REALLOC =====
    printf("\nEnter new size for realloc:\n");
    scanf("%d", &newSize);

    ptr = (int *)realloc(ptr, newSize * sizeof(int)); // resize memory

    if (ptr == NULL)
    {
        printf("Reallocation failed!\n");
        return 0;
    }

    // Input new values
    for (int i = 0; i < newSize; i++)
    {
        printf("Enter new value %d:\n", i);
        scanf("%d", &ptr[i]);
    }

    // Output new values
    printf("\nValues after realloc:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("Index %d -> %d\n", i, ptr[i]);
    }

    // ===== FREE =====
    free(ptr); // release memory
    printf("\nMemory freed successfully.\n");

    return 0;
}

/*
OUTPUT :
 DYNAMIC MEMORY ALLOCATION (malloc, calloc, realloc, free)

Enter size for malloc array:                             // input by the user
4
Enter value 0:
1
Enter value 1:
2
Enter value 2:
3
Enter value 3:
4

Values using malloc:
Index 0 -> 1
Index 1 -> 2
Index 2 -> 3
Index 3 -> 4

Enter size for calloc array:                             // input by the user
7
Enter value 0:
1
Enter value 1:
2
Enter value 2:
3
Enter value 3:
4
Enter value 4:
5
Enter value 5:
6
Enter value 6:
7

Values using calloc:
Index 0 -> 1
Index 1 -> 2
Index 2 -> 3
Index 3 -> 4
Index 4 -> 5
Index 5 -> 6
Index 6 -> 7

Enter new size for realloc:                                       // input by the user
2
Enter new value 0:
1
Enter new value 1:
2

Values after realloc:
Index 0 -> 1
Index 1 -> 2

Memory freed successfully.
*/