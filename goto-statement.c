/* GOTO STATEMENT IN C */

#include <stdio.h>

int main(){

label:
    printf("we are inside label\n");
    goto end ;

    printf("Hello krishn\n");
    goto label;

end:
    printf("we are at end");

    return 0;
}

/*
OUTPUT:
we are inside label
we are at end
*/
