#include <stdio.h>

/* Raise an integer to the nth power.  */
double
power(double base, int n)
{
    double product = base; 

    if (n == 0)
    {
        return 1;
    }

    for (int i = 1; i < n; i++)
    {
        product *= base;
    }

    return product;
}

int 
main(void)
{
    double usernum;
    int userpower;

    printf("Enter a number and a power to which to raise that number: ");
    scanf("%lf %d", &usernum, &userpower);

    printf("The answer is %f\n", power(usernum, userpower));

    return 0;
}
