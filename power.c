#include <stdio.h>

/* Raise an integer to the nth power.  */
int 
power(int base, int n)
{
    int i;
    int product = base ;

    for (i = 1; i != n; i++)
    {
        product *= base;
    }

    return product;
}

int 
main(void)
{
    int usernum;
    int userpower;

    printf("Enter a number and a power to which to raise that number: ");
    scanf("%d %d", &usernum, &userpower);

    printf("The answer is %d\n", power(usernum, userpower));

    return 0;
}
