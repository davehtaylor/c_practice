/* Print a talbe of fahrenheit to celsius conversions.  
 * K&R pg 13.  */

#include <stdio.h>

#define LOWER 0
#define UPPER 220
#define STEP 10

float 
convert_to_celsius(int fahr_temp)
{
    return  (fahr_temp - 32.0) * 5.0 / 9.0;
}

int 
main(void)
{
    int  fahr;

    printf("Fahrenheit\tCelsius\n");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%3d\t\t%6.1f\n", fahr, convert_to_celsius(fahr));
    }

    return 0;
}
