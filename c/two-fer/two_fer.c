#include <stdio.h>
#include <stdlib.h>

#include "two_fer.h"

void two_fer(char *buffer, const char *name)
{
    if (name == NULL) name = "you";
    sprintf(buffer, "One for %s, one for me.", name);
}

