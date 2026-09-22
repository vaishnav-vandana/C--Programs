/* PREDEFINED MACROS AND OTHER PRE P DIRECTIVES IN C */

#include <stdio.h>
int main()
{
    // DATE
    printf(__DATE__);
    // TIME
    printf(__TIME__);
    // FILE
    printf(__FILE__);
    // LINE
    printf("%d", __LINE__);
    // STDC
    printf("%d\n", __STDC__);

    return 0;
}

/*
OUTPUT :
Jun 19 202620:59:16preprocessor_directives.c131
*/