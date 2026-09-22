/* STATIC GLOBAL / LOCAL VARIBLE IN C */

#include <stdio.h>
int b = 16; // Global variable
int ret()
{
    return 27 * 2;
}
int func1(int b1)
{
    static int myvar = 54; // 27*2 = 54

    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return b1 + myvar; // Return the local variable and updated myvar
}
int main()
{
    int b = 37; // Local variable
    int val = func1(b);

    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    int *ptr = &val;
    return 0;
}

/*
OUTPUT :
The value of myvar is 54
The value of myvar is 55
The value of myvar is 56
The value of myvar is 57
The value of myvar is 58
*/

/*
HOW IT WORKS
first call :
b1 = 37
myvar = 54 (printed)
myvar becomes 55
return 37 + 55 = 92
val = 92
*/