/* STRING IN C */

#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name : ");

    fgets(name, sizeof(name), stdin);
    printf("My name is %s", name);

    return 0;
}

/*
OUTPUT :
Enter your name : karan vaishnav                 // input by user
My name is karan vaishnav
*/