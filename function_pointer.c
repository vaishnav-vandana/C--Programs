/* FUNCTION POINTER IN C */

#include <stdio.h>
int AddNumber(int n1, int n2)
{
    return n1 + n2;
}
int main()
{
    int (*fun)(int, int);
    fun = AddNumber;
    int res1 = fun(20, 20);
    int res2 = AddNumber(20, 20);

    printf("Using function pointer : %d\n", res1);
    printf("Using function name : %d\n", res2);

    return 0;
}

/*
OUTPUT :
Using function pointer : 40
Using function name : 40
*/