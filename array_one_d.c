// ARRAYS IN C 

/*  EXAMPLE : ONE DIMENSIONAL ARRAY */

#include <stdio.h>

int main()
{
    int marks[4];                                       // declaration of array 

    for (int i = 0; i<4 ; i++)                          // taking input 
    {
        printf("Enter marks for student %d : " , i+1 );
        scanf ("%d", &marks[i]);
    }

    printf("Marks are : \n");
    for (int  i = 0; i < 4; i++)
    {
        printf ("Marks [%d] = %d\n" , i , marks [i]);
    }

    return 0;
    
}


/*OUTPUT :
Enter marks for students 0 : 59
Enter marks for students 1 : 70
Enter marks for students 2 : 64
Enter marks for students 3 : 78
Marks are :
Marks [0] = 59
Marks [1] = 70
Marks [2] = 64
Marks [3] = 78
*/