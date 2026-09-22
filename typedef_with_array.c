/* TYPEDEF WITH ARRAYS */

#include <stdio.h>

typedef int Matrix[3][3];
int main()
{
    Matrix m =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};
    printf("%d", m[1][1]);
    return 0;
}

/*
OUTPUT :
5                            // m[1][1] = 5 because indexing starts from 0 (2nd row, 2nd column)
*/