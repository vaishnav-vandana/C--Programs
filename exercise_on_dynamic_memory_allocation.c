/* EXERCISE : EMPLOYEE MANAGER PROGRAM */

/* Write a c program to manage employee IDs using dynamic memory allocation .
// Take the length of employee ID as input .
// Dynamically allocate a character array to store the ID
// Take the employee ID as input and display it
// Perform this for 3 employees using same pointer
// use realloc() to adjust memory efficiently
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char *ptr = NULL;

    while (i < 3)
    {
        printf("Employee %d : Enter number of character\n", i + 1);
        scanf("%d", &chars);

        ptr = (char *)realloc(ptr, (chars + 1) * sizeof(char));
        printf("Enter your employee ID \n");
        scanf("%s", ptr);

        printf("Your Employee ID is %s\n", ptr);

        i++;
    }

    free(ptr);

    return 0;
}

/*
OUTPUT :
Employee 1 : Enter number of character
1
Enter your employee ID
a
Your Employee ID is a
Employee 2 : Enter number of character
2
Enter your employee ID
a1
Your Employee ID is a1
Employee 3 : Enter number of character
3
Enter your employee ID
a12
Your Employee ID is a12
*/