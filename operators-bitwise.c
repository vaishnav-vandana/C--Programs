/*BITWISE OPERATOR*/
#include <stdio.h>

int main()
{
    int a , b ;
    a = 5 ;
    b = 3 ;

    printf("a&b %d\n" , a&b);                                           // AND & OPERATOR result 1 when both  bit are 1
    printf("a|b %d\n" , a|b);                                           // OR | OPERATOR result 1 when one bit is 1 
    printf("a^b %d\n" , a^b);                                           // XOR ^ OPERATOR result 1 when bits are different 
    printf("~a %d\n" , ~a);                                             // NOT ~ OPERATOR 0 became 1 and 1 became 0 
    printf("a<<1 %d\n" , a<<1);                                         // LEFT SHIFT << moves bits to left and add 0 
    printf("a>>1 %d\n" , a>>1);                                         // RIGHT SHIFT >> moves bits to right and add 0
    

    return 0 ; 
}

/* OUTPUT : 
a&b 1
a|b 7
a^b 6
~a -6
a<<1 10
a>>1 2
*/
