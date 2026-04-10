/*RELATIONAL OPERATOR */
#include <stdio.h>

int main()
{
    int a , b;
    a = 2;
    b = 1;

    printf("a==b = %d\n" , a==b);                                      //is equal to 
    printf("a!=b = %d\n" , a!=b);                                      // is not equal to 
    printf("a>=b = %d\n" , a>=b);                                      // greater than or equal to 
    printf("a<=b = %d\n" , a<=b);                                      // less than or equal to 
    printf("a>b = %d\n" , a>b);                                        // greater than 
    printf("a<b = %d\n" , a<b);                                        // less than 

    return 0 ; 
}

/* OUTPUT : 
a==b = 0
a!=b = 1
a>=b = 1
a<=b = 0
a>b = 1
a<b = 0
*/
