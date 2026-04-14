/* Example : with arguments and without return value*/

#include <stdio.h>

void printstar (int n)                                                // void means : This function does NOT return any value
{
    for (int  i = 0; i < n; i++)
    {
        printf("*");
    
    }   
}

int main()
{
    printstar(7);
    return 0 ;

}

/*
OUTPUT :
*******
*/