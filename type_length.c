#include <stdio.h>
#include <limits.h>

int
main(void)
{
    printf("short min is %d\n", SHRT_MIN);
    printf("short max is %d\n", SHRT_MAX);
    printf("unsigned short max is %d\n", USHRT_MAX);

    putchar('\n');

    printf("long min is %d\n", LONG_MIN);
    printf("long max is %d\n", LONG_MAX);
    printf("unsigned long max is %d\n", ULONG_MAX);

    putchar('\n');

    printf("int min is %d\n", INT_MIN);
    printf("int max is %d\n", INT_MAX);
    printf("unsigned int max is %d\n", UINT_MAX);

    putchar('\n');

    printf("char min is %d\n", CHAR_MIN);
    printf("char max is %d\n", CHAR_MAX);
    printf("unsigned char max is %d\n", UCHAR_MAX);
    
    return 0;
}
