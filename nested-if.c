/* NESTED IF STATEMENT IN C */

#include <stdio.h>

int main()
{
    int age = 20;
    int hasID = 1;

    if (age>=18)
    {
        if(hasID==1)
        {
            printf("You can vote");
        }
    }
    return 0;
}
/* 
OUTPUT :
You can vote 
✔ age = 20 (≥ 18) → condition true
✔ hasID = 1 → inner condition also true
✔ Both conditions satisfied → output prints

✔ If any condition becomes false → nothing will be printed
*/
