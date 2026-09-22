/* Example : fibonacci iteration */

#include <stdio.h>

int main()
{
    int n , i;
    int a = 0 , b = 1 , next;

    printf("Enter number of terms :\n");
    scanf("%d" , &n);

    if (n<0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d " , a);
        next = a + b ;
        a = b ;
        b = next ; 
    }

    printf("\n");

    return 0;

}
/*
OUTPUT :
Enter number of terms : 
4                                       // Output depends on the input provided by the user.                        
0 1 1 2 */