/* OTHER FILE I/O FUNCTIONS IN C */

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    // Open file in read + write mode (file must exist)
    ptr = fopen("file_IO_func.txt", "r+");

    // Check if file opened successfully
    if (ptr == NULL)
    {
        printf("Error! File cannot be opened.\n");
        return 1;
    }

    //  fgetc : Reads one character at a time
    char c;

    c = fgetc(ptr); // Reads 1st character
    printf("First character: %c\n", c);

    c = fgetc(ptr); // Reads 2nd character
    printf("Second character: %c\n", c);

    // ------------------- IMPORTANT -------------------
    // Reset file pointer to beginning before using fgets
    // Otherwise it will continue from current position

    fseek(ptr, 0, SEEK_SET);

    // fgets() : Reads a full line (string) from file
    char str[50];
    fgets(str, sizeof(str), ptr);
    printf("String using fgets: %s\n", str);

    // fputc() : Move pointer to end to avoid overwriting existing data
    fseek(ptr, 0, SEEK_END);

    fputc('A', ptr);  // Writes a single character
    fputc('\n', ptr); // New line

    // fputs() :  Writes a string to file
    fputs("This is written using fputs.\n", ptr);

    // Close file
    fclose(ptr);

    return 0;
}

/*
OUTPUT :
First character: P
Second character: r
String using fgets: Programming in c
*/