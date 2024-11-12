#include <stdbool.h>

#include "darts.h"

/* The outer circle has a radius of 10 units (this is equivalent to the total
 * radius for the entire target), the middle circle a radius of 5 units, and the
 * inner circle a radius of 1.
 */

#define OUTER_CIRCLE 10
#define MIDDLE_CIRCLE 5
#define INNER_CIRCLE 1

static bool in_circle(coordinate_t pos, int radius) {
    float len = pos.x * pos.x + pos.y * pos.y;
    return len <= (radius * radius);
}

uint8_t score(coordinate_t pos) {
    if (in_circle(pos, INNER_CIRCLE)) return 10;
    if (in_circle(pos, MIDDLE_CIRCLE)) return 5;
    if (in_circle(pos, OUTER_CIRCLE)) return 1;
    return 0;
}
