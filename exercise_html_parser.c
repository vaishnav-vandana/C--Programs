/* EXERCISE : */

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // Remove the trailing spaces from the beginning
    while (string[0] == ' ')
    {
        // Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            /* code */
            string[i] = string[i + 1];
        }
    }
    // Remove the trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "    <harrysdfsdfsdf>this is a heading    </harry>     ";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}
/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0;
    int index = 0;
    int len = strlen(string);

    // Remove tags
    for (int i = 0; i < len; i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            string[index++] = string[i];
        }
    }
    string[index] = '\0';

    // Remove leading spaces
    int start = 0;
    while (string[start] == ' ')
        start++;

    // Shift once (efficient)
    int i = 0;
    while (string[start] != '\0')
    {
        string[i++] = string[start++];
    }
    string[i] = '\0';

    // Remove trailing spaces
    int end = strlen(string) - 1;
    while (end >= 0 && string[end] == ' ')
    {
        string[end--] = '\0';
    }
}

int main()
{
    char string[] = "    <harry>this is a heading    </harry>     ";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}