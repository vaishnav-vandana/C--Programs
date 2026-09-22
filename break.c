/* BREAK STATEMENT IN C */

#include <stdio.h>
int main()
{
    int i , age ;
    for (i=0 ; i<10 ; i++)
    {
        printf("%d\n Enter your age\n",i);
        scanf("%d", &age);
        if (age>10)
        {
            break;
        }
    }
    return 0 ;
} 

/*
OUTPUT FLOW :

Loop starts
   ↓
Print value of i
   ↓
Take age input
   ↓
Check : age > 10 ?
   ↓
FALSE → Continue loop until i = 9
TRUE  → break executes → Exit loop immediately

*/