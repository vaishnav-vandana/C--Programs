/* GLOBAL VARIABLE IN C */

#include <stdio.h>
int count = 10; // Global variable
void display()
{
    printf("Count = %d\n", count);
}

void increament()
{
    count++;
}

int main()
{
    printf("Before increament : %d\n", count);
    increament();
    printf("After increament : %d\n", count);

    display();
    return 0;
}

/*
OUTPUT :
Before increament : 10
After increament : 11
Count = 11
*/