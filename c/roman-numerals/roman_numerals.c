#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "roman_numerals.h"

char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int arabic[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

/*
 * I is 1
 * V is 5
 * X is 10
 * L is 50
 * C is 100
 * D is 500
 * M is 1000
 */
char *to_roman_numeral(unsigned int number) {
	char *roman_numeral = malloc(50);
	if (number == 0 || number > 3999) {
		roman_numeral = strcpy(roman_numeral, "");
		return roman_numeral; 
	}

	int num = number;
	for (int i=0; i<13; i++) {
		for (; num / arabic[i] > 0; num -= arabic[i]) {
			roman_numeral = strcat(roman_numeral, roman[i]);
		}
	}

	return roman_numeral;	
}

