/* STORAGE CLASS IN C */

#include <stdio.h>
// #include "temp.c"

int myfunc(int a, int b)
{
    // auto int myvar ;
    static int myvar;
    myvar++;
    printf("The myvar is %d\n", myvar);

    // myvar = a + b ;
    return myvar;
}
int main()
{
    int a;
    int b;

    // Declaration - Telling the compiler about the variable (no space reserved)
    // Defination - Declaration + space reservation

    register int myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    // printf ("The myvar is %d\n" , myvar);
    return 0;
}

/*
OUTPUT :
The myvar is 1
The myvar is 2
*/