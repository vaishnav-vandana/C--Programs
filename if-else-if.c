/*3. if else-if LADDER STATEMENT IN C  */

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("You can vote");
    
    }
    else if (age>=10)
    {
        printf("You are between 10 to 18");
    }
    else
    {
        printf("You cannot vote");
    }
    return 0 ; 

}
/*
OUTPUT :
Key Observations:
✔ Output depends on user input  
✔ Only one condition executes  
✔ First true condition in if-else ladder is selected 
*/
