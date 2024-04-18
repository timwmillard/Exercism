#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index == 0 || index > 64) return 0;
    return (uint64_t)1<<(--index);
}

uint64_t total(void)
{
    return -1;
}

