/* Write a program to count blanks, tabs, and newlines.  
 * K&R pg 20.  */

#include <stdio.h>

#define TAB '\t'
#define NEWLINE '\n'
#define SPACE ' '

int
main(void)
{

    char c;
    unsigned int tab_count = 0;
    unsigned int newline_count = 0;
    unsigned int space_count = 0;

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
    
    printf("Tabs: %u \n"
           "Newlines: %u \n"
           "Spaces: %u \n", tab_count, newline_count, space_count);

    return 0;
}
