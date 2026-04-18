/*  EXAMPLE : TWO DIMENSIONAL ARRAY */

#include <stdio.h>

int main()
{
    int marks [2][4] = {                                           // 2 rows, 4 columns
        {45, 64, 86, 41},
        {78, 34, 25, 16}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT :
45 64 86 41 
78 34 25 16
*/