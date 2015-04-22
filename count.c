/* Write a program to count blanks, tabs, and newlines.  
 * K&R pg 20.  */

#include <stdio.h>

#define TAB '\t'
#define NEWLINE '\n'
#define SPACE ' '

int
main(void)
{

    int tab_count = 0;
    int newline_count = 0;
    int space_count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == TAB)
        {
            tab_count += 1;
        }
        else if (c == NEWLINE)
        {
            newline_count += 1;
        }
        else if (c == SPACE)
        {
            space_count += 1;
        }
    }

    return 0;
}
