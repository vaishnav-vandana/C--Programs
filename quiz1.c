// GIFT DISTRIBUTION FOR EXAM RESULT 

/* QUIZ : A student is given a gift based on exam performance:
If passed in both Math and Science → ₹45 gift
If passed in only one subject → ₹15 gift
If failed in both → No gift*/

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

/* 
OUTPUT :
Output depends on user input:
- Both subjects passed → Rs 45 gift  
- One subject passed → Rs 15 gift  
- None passed → No gift
*/
