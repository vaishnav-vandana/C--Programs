// UNIT COVERSION 

/* centimeter to meter conversion program using loop */ 


#include <stdio.h>

int main ()
{
    float centimeter , meter ;
    char choice ;

    do
    {
        printf ("Enter the value in centimeters : \n ");
        scanf ("%f", &centimeter);

        meter = centimeter/100 ;

        printf("Value in meters = %.2f\n" , meter) ;                 //%.2f = 2 digits after decimal (rounded)

        printf("Do you want to continue ? (yes-y / no-n ):\n");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
        {
            printf ("YOU ARE IN PROGRAM \n");
        }
        else
        {
            printf("EXIT PROGRAM \n");
        }

    } while (choice == 'y' || choice == 'Y');

    return 0;
    
}

/* OUTPUT :
Enter value in centimeters:
Input given by user

Value in meters = result

y → continue
n → exit
*/