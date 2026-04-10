/*USE OF DEFINE PREPROCESSOR*/
#include <stdio.h>
# define PI 3.14
int main()
{
    int a = 8;
    //PI = 7.33  it gives an error PI is in define preprocessor 
    printf("a = %d\n",a);
    printf("%f\n", PI);
    return 0 ; 
}
