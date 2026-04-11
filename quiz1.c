// GIFT DISTRIBUTION FOR EXAM RESULT 
#include <stdio.h>
int main()
{
    int math , science ;

    printf("Did you pass in math?, 1 for yes , 0 for no : ");
    scanf("%d",&math);

    printf("Did you pass in science? , 1 for yes , 0 for no :");
    scanf("%d",&science);

    if (math==1 && science==1) 
    {
        printf("GIFT : Rs 45");
    }

    else if (math==1 || science == 1)
    {
        printf("GIFT : Rs 15");
    }

    else 
    {
        printf("NO GIFT");
    }
    return 0;
}