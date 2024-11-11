#include <stdlib.h>
#include <stdint.h>
#include "resistor_color.h"

 int16_t color_code(resistor_band_t band) {
     return band;
 }

 resistor_band_t *colors(void) {
     
     resistor_band_t *cs = malloc(sizeof(resistor_band_t) * (WHITE + 1));
     for (int i = 0; i <= WHITE; i++) {
         cs[i] = (resistor_band_t) i;
     }
     return cs;
 }
