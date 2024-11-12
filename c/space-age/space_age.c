#include "space_age.h"

#define EARTH_SEC 31557600.0

static float periods[] = {
      0.2408467,
      0.61519726,
      1.0,
      1.8808158,
     11.862615,
     29.447498,
     84.016846,
    164.79132
};

float age(planet_t planet, int64_t seconds) {
    if (planet < MERCURY || planet > NEPTUNE) return -1;

    return seconds / EARTH_SEC / periods[planet];
}
