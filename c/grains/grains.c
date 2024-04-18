#include <math.h>

#include "grains.h"

const int table[64] = {
    1,
};

uint64_t square(uint8_t index)
{
    if (index == 0 || index > 64) return 0;
    return pow(2, --index);
}

uint64_t total(void)
{
    int sum = 0;
    for (int i=1; i < 64; i++)
        sum += square(i);
    return sum;
}

