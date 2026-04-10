/*USE OF CONSTANTS IN C */
#include <stdio.h>
int main()
{
    int a = 8;
    const float b = 7.333;
    //b = 7.22 ;  it gives an error . we can't do this since b is constant 

    printf("a = %d\n" , a);
    printf("b = %f\n", b);    
    return 0;
}