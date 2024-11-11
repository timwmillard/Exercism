#include <stdint.h>
#include "resistor_color.h"

static resistor_band_t all_colors[] = { COLORS };

 int16_t color_code(resistor_band_t band) {
     return band;
 }

 resistor_band_t *colors(void) {
     return all_colors;
 }
