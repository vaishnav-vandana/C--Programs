/* TYPEDEF : WITH STRUCTURE */

#include <stdio.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;
int main()
{
    std s1, s2;
    s1.id = 56;
    s2.id = 89;

    printf("Value of s1 ID is %d\n", s1.id);
    printf("Value of s2 ID is %d\n", s2.id);

    return 0;
}

/*
OUTPUT :
Value of s1 ID is 56
Value of s2 ID is 89
*/