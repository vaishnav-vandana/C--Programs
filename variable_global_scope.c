/* SCOPE OF GLOBAL VARIABLE IN C */

#include <stdio.h>
int x = 100;

void show()
{
    printf("x = %d\n", x);
}

int main()
{
    show();
    printf("x = %d\n", x);

    return 0;
}

/*
OUTPUT :
x = 100
x = 100
*/