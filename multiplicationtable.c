/*EXERCISE 1 : MULTIPLICATION TABLE : */
#include <stdio.h>

int main()
{
    int a , i ;
    printf("enter the number you want multiplication table of : \n");
    scanf("%d",&a);

    for (i=1 ; i <= 10 ; i++)
    { 
        printf("%d x %d = %d\n", a , i , a*i);

    }
   
    return 0;
}
/* OUTPUT:
Enter the number you want multiplication table of: 8
8 x 1 = 8
8 x 2 = 16
...
8 x 10 = 80
*/
