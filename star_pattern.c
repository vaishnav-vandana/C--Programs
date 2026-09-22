// EXERCISE: TRIANGULAR STAR PATTERN AND REVERSE TRIANGULAR STAR PATTERN 

# include <stdio.h>

void starPattern (int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverseStarPattern (int rows)
{
    for (int i = 0; i <= rows-1; i++)
    {
        for (int j = 0; j < rows-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}


int main ()
{
    int rows ;
    int type ;

    printf("Enter 0 for starPattern and 1 for reverse starPattern : ");
    scanf("%d",&type);

    printf("Enter how many rows do you want ? :\n"); 
    scanf ("%d",&rows);
    
    switch (type)
    {
    case 0:
        starPattern (rows);
        break;
    case 1:
        reverseStarPattern (rows);
        break;
    default:
        printf("Invalid input by the user");
        break;
    }
}

/*
OUTPUT :
Enter 0 for starPattern and 1 for reverse starPattern : 0                                           
Enter how many rows do you want ? :
4
*
**
***
****
*/