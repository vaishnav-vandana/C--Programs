/*ASSIGNMENT OPERATOR*/
#include <stdio.h>

int main() {
    int a, b;

    a = 10;                                                                                 // = operator: assign 10 to a
    b = 5;                                                                                  // assign 5 to b

    printf("a==b = %d\n" , a==b);                                                          // equal to operator
    printf("a+=b = %d\n" , a+=b);                                                          // add AND operator 
    printf("a-=b = %d\n" , a-=b);                                                          // subtract AND operator 
    printf("a*=b = %d\n" , a*=b);                                                          // multiply AND operator
    printf("a/=b = %d\n" , a/=b);                                                          // divide AND operator 
    printf("a%=b = %d\n" , a%=b);                                                          // module operator 
    return 0;
}

