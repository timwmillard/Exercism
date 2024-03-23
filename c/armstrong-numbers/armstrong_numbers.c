#include <math.h>
#include <stdbool.h>

#include "armstrong_numbers.h"


bool is_armstrong_number(int candidate)
{
    int num_digits = (int)log10(candidate) + 1;

    int sum = 0;
    int rem = candidate;
    while (rem > 0) {
        int digit = rem % 10;
        sum += pow(digit, num_digits);
        rem /= 10;
    }
    return sum == candidate;
}
