/* CONTINUE STATEMENT IN C */

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
            continue;
        }
        printf("Out of continue loop");
    }
    return 0 ;
}

/* OUTPUT :
i=0 → age>10 → continue  
i=1 → age≤10 → "Out of continue loop"  
i=2 → age>10 → continue  
i=3 → age≤10 → "Out of continue loop"  
... (repeats till i=9) */
