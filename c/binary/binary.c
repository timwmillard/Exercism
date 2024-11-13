#include <string.h>

#include "binary.h"

int convert(const char *input)
{
    size_t len = strlen(input);
    int num = 0;
    for (size_t i = 0; i < len; i++) {
        if (input[i] == '1') {
           int n = 1 << (len - i - 1); 
           num += n;
        } else if (input[i] != '0')
            return INVALID;
    }
    return num;
}

