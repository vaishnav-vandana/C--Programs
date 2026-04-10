/*ESCAPE SEQUENCE*/

//1. \n - New Line
#include <stdio.h>

int main()
{
    printf("Mom: Study now!\n");
    printf("Me: 5 minutes...\n");
    printf("Also me after 5 hours: Still 5 minutes left 😅\n");

    return 0;
}

/* OUTPUT :
Mom: Study now!
Me: 5 minutes...
Also me after 5 hours: Still 5 minutes left 😅
*/


/*
These are special character used inside printf() with \ 
Example are : 

🔤 Common Escape Sequences
Escape Sequence	Name / Meaning
\a	Alert (Bell) 🔔
\b	Backspace
\f	Form Feed (page break)
\n	New Line
\r	Carriage Return
\t	Horizontal Tab
\v	Vertical Tab
\\	Backslash (\)
\'	Single Quote (')
\"	Double Quote (")
\?	Question Mark

🔢 Special Escape Sequences
Escape Sequence	Name / Meaning
\nnn	Octal Value (character using octal number)
\xhh	Hexadecimal Value (character using hex number)
\0	Null Character (string terminator)

*/