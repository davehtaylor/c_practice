/* Verify that the expression getchar() != EOF is 0 or 1.
 * Write a program to print the value of EOF.  
 * K&R pg 17.  */

#include <stdio.h>

int 
main(void)
{
    int c;

    c = getchar();

    printf("%d\n", c != EOF);
    printf("%d\n", EOF);

    return 0;
}
