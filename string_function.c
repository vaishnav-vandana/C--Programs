/* STRING FUNCTION IN C */

#include <stdio.h>
#include <string.h>

int main()
{
    // 1. strcat()
    printf("1. strcat() : \n");
    char s1[] = "Radha";
    char t1[30] = "Rani";

    strcat(t1, s1);
    printf("String = %s", t1);

    // 2. strlen()
    printf("\n2. strlen() : ");
    char str1[] = "Karan";
    int str_length;
    str_length = strlen(str1);
    printf("length = %d", str_length);

    // 3. strcpy()
    printf("\n3. strcpy() : ");
    char s2[] = "Codewithkrishn";
    char t2[30];

    strcpy(t2, s2);
    printf("\n Source string = %s", s2);
    printf("\n Target string = %s", t2);

    // 4. strcmp()
    printf("\n4. strcmp() : ");
    char string1[] = "Karan";
    char string2[] = "code";

    int a;
    a = strcmp(string1, string2);
    printf("\nResult = %d", a);

    // 5. strrev() (not standard , so we do manually)
    printf("\n5. strrev() : ");
    char str2[50] = "1234";

    // Manual reverse
    int i, len = strlen(str2);
    for (i = 0; i < len / 2; i++)
    {
        char temp = str2[i]; // temp - temporary variable
        str2[i] = str2[len - i - 1];
        str2[len - i - 1] = temp;
    }
    printf("After reversing string is = %s\n", str2);

    return 0;
}

/*
OUTPUT:
1. strcat() :
String = RaniRadha
2. strlen() : length = 5
3. strcpy() :
 Source string = Codewithkrishn
 Target string = Codewithkrishn
4. strcmp() :
Result = -1
5. strrev() : After reversing string is = 4321
*/