// ARRAY AND POINTER

#include <stdio.h>
int main()
{
    int i, a[5], *p;
    p = &a[0]; // We can also write &a or a

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", p + i); // This will take input in array
    }

    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", *(p + i)); // This will print array's values
    }

    return 0;
}

/*
OUTPUT :
10 20 30 40 50                       // Input by the user choice
10
20
30
40
50
*/

/*
NOTES:
1. p = a → base address of array
2. (p + i) → address of a[i]
3. *(p + i) → value of a[i]
4. a[i] == *(p + i)
5. Arrays are stored in contiguous memory
*/