#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#include "armstrong_numbers.h"


bool is_armstrong_number(int candidate)
{
    if (candidate < 0 ) {
        return false;
    }
    if (candidate == 0 ) {
        return true;
    }

    int num_digits = (int)log10(candidate) + 1;

    char *digits = malloc(num_digits + 1);
    snprintf(digits, num_digits+1, "%d", candidate);

    int sum = 0;
    for (int i=0; i<num_digits; i++) {
        int digit = digits[i] - '0';
        sum += pow(digit, num_digits);
    }

    free(digits);

    return sum == candidate;
}
