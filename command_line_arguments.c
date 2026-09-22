/* COMMAND LINE ARGUMENTS IN C */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // argc = Argument Count (number of arguments passed)
    // argv = Argument Vector (array of argument strings)

    printf("Total number of arguments (argc): %d\n\n", argc);

    // Loop through all arguments
    for (int i = 0; i < argc; i++)
    {
        printf("Argument at index %d: %s\n", i, argv[i]);
    }

    return 0;
}

/*

OUTPUT (Example - Windows PowerShell):
Command:
gcc command_line_arguments.c -o program
./program hello world

OUTPUT :
Total number of arguments (argc): 3
Argument at index 0: I:\C programming\program.exe
Argument at index 1: hello
Argument at index 2: world
*/