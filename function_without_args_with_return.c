/*Example : without arguments and with return value*/

#include <stdio.h>

int takenumber ()
{
    int i;
    printf ("Enter a number: ");
    scanf("%d",&i);
    return i;                          // only return , no printing here 
}

int main ()
{
    int c;
    c=takenumber();

    printf ("The number is %d\n" ,c);      // printing in main 

    return 0;
    
}

/*
OUTPUT:
Enter a number : 18    // Input may change
The number is 18       // Output depends on input
*/