/*2. if-else STATEMENT IN C */

#include <stdio.h>

int main ()
{
    int age;
    printf("Enter your age : ");
    scanf("%d" , &age);

    if (age>=18)
    {
        printf(" You can vote ");
    }
    else
    {
        printf(" You cannot vote ");
    }

    return 0 ; 
}

/*
OUTPUT :
✔ Output depends on age input
✔ If age ≥ 18 → can vote
✔ Else → cannot vote
*/
