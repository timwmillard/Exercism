#include "leap.h"

/* A leap year (in the Gregorian calendar) occurs: */

/* - In every year that is evenly divisible by 4. */
/* - Unless the year is evenly divisible by 100, in which case it's only a leap
 * year if the year is also evenly divisible by 400. */
bool leap_year(int year)
{
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
