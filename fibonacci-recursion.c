/* Example : fibonacci recursion */

# include <stdio.h>

int fibonacci (int n)

{
    if (n == 0 || n == 1)
       return n ;

    return fibonacci(n-1) + fibonacci (n-2) ; 
}

int main ()
{
    int n , i ;

    printf("Enter number of terms : ");
    scanf ("%d" , &n);

    if (n < 0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }

    for ( i = 0; i < n; i++)
    {
        printf ("%d\n" , fibonacci(i));
    }
    
    return 0 ; 
}

/*OUTPUT :
Enter number of terms : 4                       // Output depends on the input provided by the user.
0
1
1
2

HOW IT WORKS?

The program prints the Fibonacci series using recursion.

1. The loop in main() runs from i = 0 to n-1.
   For each value of i, fibonacci(i) is called.

2. The fibonacci() function works as:
   - If n == 0 → return 0   (base case)
   - If n == 1 → return 1   (base case)
   - Otherwise → return fibonacci(n-1) + fibonacci(n-2)

3. Example:
   fibonacci(3)
   = fibonacci(2) + fibonacci(1)
   = (fibonacci(1) + fibonacci(0)) + 1
   = (1 + 0) + 1
   = 2

4. Each call keeps breaking into smaller calls
   until it reaches the base cases (0 and 1),
   then results are added while returning back.
*/