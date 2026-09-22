/* celsius to fahrenheit conversion using loop */

#include <stdio.h>

int main()
{
    double celsius , fahrenheit ;
    char choice ;

    do
    {
        printf ("Enter the value in celsius : \n ");
        scanf ("%lf" , &celsius);

        fahrenheit = ((celsius*1.8) + 32 );

        printf ("Value in fahrenheit = %.2lf \n" , fahrenheit);

        printf("Do you want to continue ? (yes-y / no-n): \n");
        scanf(" %c",&choice);

        if (choice == 'y' || choice == 'Y')
        {
            printf("YOU ARE IN PROGRAM \n");
        }
        else
        {
            printf("EXIT PROGRAM \n");
        }


    } while (choice == 'y' || choice == 'Y');

    return 0;
    
}
/* OUTPUT :
Enter value in celsius:
Input given by user

Value in fahrenheit  = result

y → continue
n → exit
*/