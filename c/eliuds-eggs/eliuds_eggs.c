#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int num)
{
    int eggs = 0;
    while (num != 0) {
        if ((1 & num) == 1) eggs++;
        num = num >> 1;
    }
    return eggs;
}
