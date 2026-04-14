// FUNCTIONS IN C 

/* Example : with arguments and with return value */ 

#include <stdio.h>

// Function to calculate sum
int sum (int a , int b )
{
    return a + b ;
}

int main ()
{
    int a , b , c ;
    a = 77 ;
    b = 28 ; 
    c = sum (a,b);
    printf("The sum is %d \n" , c );

    return 0 ;

}

/*
OUTPUT:
The sum is 105
*/