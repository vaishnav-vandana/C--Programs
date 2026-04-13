//LOOPS IN C LANGUAGE 

/* DO WHILE LOOP IN C  */

# include <stdio.h>

int main()

{
    int num , index = 0 ;
    printf ("Enter a number\n");
    scanf ("%d",&num);

    do
    {
        printf("%d\n",index+1);
        index = index+1;
    } while ( index<num);

    return 0 ;
    
}
/*
OUTPUT:
Enter a number: 5                         // Input = user decides (can be different every time) , Output = always depends on that input
1  
2  
3  
4  
5  
*/
