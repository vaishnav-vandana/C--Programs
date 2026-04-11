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