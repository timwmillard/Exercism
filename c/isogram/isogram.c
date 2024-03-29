#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "isogram.h"


bool is_isogram(const char phrase[]) 
{
    if (phrase == NULL) return false;

    int len = strlen(phrase);

    char *occured = calloc(len + 1, sizeof(char));
    int occured_count = 0;

    for (int i=0; i<len; i++) {
        char letter = phrase[i];
        if (!isalpha(letter)) continue;

        for (int i=0; i<occured_count; i++) {
            if (tolower(letter) == tolower(occured[i])) {
                free(occured);
                return false;
            }
        }

        occured[occured_count++] = letter;
    }

    free(occured);

    return true;
}

