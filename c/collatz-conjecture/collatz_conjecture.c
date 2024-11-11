#include "collatz_conjecture.h"

int steps_count(int n, int s);

int steps_count(int n, int s) {
    if (n == 1) return s;

    if (n%2 == 0) // even
        return steps_count(n/2, ++s);
    
    return steps_count(3*n + 1, ++s);
}


int steps(int start) {
    if (start <= 0) return ERROR_VALUE;

    return steps_count(start, 0);
}

