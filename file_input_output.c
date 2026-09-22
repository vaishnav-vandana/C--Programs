/* FUNCTIONS FOR I/O IN C */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by FUNCTIONS FOR I/O ";

    // READING A FILE
    ptr = fopen("file_IO.txt", "r");                     // Open file in a read mode
    fscanf(ptr, "%s", string);                           // Read first word from file into string
    printf("The content of this file has %s\n", string); // Print content

    // WRITING A FILE
    ptr = fopen("file_IO.txt", "a"); // Open file in append mode
    fprintf(ptr, "%s", string);      // Write string at end of file

    return 0;
}

/*
OUTPUT :
The content of this file has This content was produced by FUNCTIONS FOR I/O
*/

/* NOTE :
"r" → read file
"a" → append (add data at end)
fscanf() → reads data from file
fprintf() → writes data to file
File pointer ptr is used to access file
*/