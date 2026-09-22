// MEMORY LAYOUT IN C

/*NOTE : /*
text → program code (main function)
data → initialized global/static variables
bss  → uninitialized global/static variables (default = 0)

size = text + data + bss

Note:
- local variables → stack
- dynamic memory → heap
- empty program still large (compiler + libraries)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}

/*
OUTPUT :
run this command in terminal
gcc filename.c ; size .\a.exe

   text    data     bss     dec     hex filename
  12500     208     384   13092    3324 .\a.exe
*/