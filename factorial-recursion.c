//RECURSIVE FUNCTION IN C 

/* Example : factorial calculation */

#include <stdio.h>

int factorial (int number)

{
    if (number < 0)
       return -1;

    if (number <= 1) 
       return 1 ; 

    return (number * factorial(number-1));
    
}

int main()
{
    int num ;
    printf("Enter the number you want to factorial of \n");
    scanf ("%d",&num);

    int result = factorial (num);

    if (result == -1)
    {
        printf("Factorial is not defined for negative number\n");
    }
    else 
    {
        printf("The factorial of %d is %d\n", num , result);
    }
    
    return 0 ;
}

/*OUTPUT :
Enter the number you want to factorial of
5
The factorial of 5 is 120 

The function returns -1 for negative input

HOW IT WORK ?
factorial(5)
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * 2 * 1
= 120
*/