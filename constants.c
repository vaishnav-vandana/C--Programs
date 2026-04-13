/*USE OF CONST KEYWORD  IN C */
#include <stdio.h>

int main()
{
    int a = 8;
    const float b = 7.333;
    //b = 7.22 ;  it gives an error . we can't do this since b is constant or ERROR : CANNOT MODIFY CONSTANT

    printf("a = %d\n" , a);
    printf("b = %f\n", b);   
    
    return 0;
}

/* OUTPUT:
a = 8
b = 7.333000
*/ 
