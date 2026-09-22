/* STORAGE CLASS IN C (2) */

#include <stdio.h>

/* EXTERNAL VARIABLE */

int extVar = 100; // Global variable (accessible everywhere)

/* STATIC VARIABLE */
int staticDemo()
{
    static int sVar; // retains value between calls (default = 0 )
    sVar++;
    printf("Static = %d\n", sVar);
    return sVar;
}

/* AUTO VARIABLE FUNCTION */
void autoDemo()
{
    auto int aVar = 10; // recreated every call
    aVar++;
    printf("Auto = %d\n", aVar);
}

int main()
{
    /* REGISTER VARIABLE */
    register int rVar = 5; // fast access (no and allowed)
    printf("Register = %d\n", rVar);

    /* AUTO */
    autoDemo();
    autoDemo();

    /* STATIC */
    staticDemo();
    staticDemo();

    /* EXTERN */
    printf("External = %d\n", extVar);

    return 0;
}

/*
NOTE : // Functions are called twice to demostrate
       // auto resets value , static retains value
*/

/*
OUTPUT :
Register = 5
Auto = 11
Auto = 11
Static = 1
Static = 2
External = 100
*/