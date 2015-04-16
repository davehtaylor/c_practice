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

