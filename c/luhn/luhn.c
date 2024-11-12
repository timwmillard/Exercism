#include <string.h>
#include <ctype.h>

#include "luhn.h"

// Validating a Number
bool luhn(const char *num)
{
    size_t len = strlen(num);
    if (len <= 1) return false;

    int total = 0;
    int digits = 0;
    for (int i = len-1; i>=0; i--) {
        char c = num[i];
        if (isspace(c)) continue;
        if (isdigit(c)) {
            int n =  c - '0';
            if (digits++ % 2 != 0) {
                n *= 2;
                if (n > 9) n -= 9;
            }
            total += n;
        } else return false;
    }
    if (digits <= 1) return false;

    return total % 10 == 0;
}

