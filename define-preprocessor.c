/* USE OF DEFINE PREPROCESSOR IN C */

#include <stdio.h>

# define PI 3.14

int main()
{
    int a = 8;
    
    // PI = 7.33  ❌ ERROR (because PI is a macro, not a variable)
    
    printf("a = %d\n", a);
    printf("PI = %f\n", PI);
    
    return 0; 
}

/* OUTPUT : 
a = 8 
PI = 3.140000
*/
