package romannumerals

import (
	"errors"
)

/*
 * I is 1
 * V is 5
 * X is 10
 * L is 50
 * C is 100
 * D is 500
 * M is 1000
 */
func ToRomanNumeral(number int) (string, error) {
	if number < 1 || number > 3000 {
		return "", errors.New("out of range")
	}
	var numeral string
	var i = number
	for ; (i / 1000) > 0; i -= 1000 {
		numeral += "M"
	}
	for ; (i / 900) > 0; i -= 900 {
		numeral += "CM"
	}
	for ; (i / 500) > 0; i -= 500 {
		numeral += "D"
	}
	for ; (i / 400) > 0; i -= 400 {
		numeral += "CD"
	}
	for ; (i / 100) > 0; i -= 100 {
		numeral += "C"
	}
	for ; (i / 90) > 0; i -= 90 {
		numeral += "XC"
	}
	for ; (i / 50) > 0; i -= 50 {
		numeral += "L"
	}
	for ; (i / 40) > 0; i -= 40 {
		numeral += "XL"
	}
	for ; (i / 10) > 0; i -= 10 {
		numeral += "X"
	}
	for ; (i / 9) > 0; i -= 9 {
		numeral += "IX"
	}
	for ; (i / 5) > 0; i -= 5 {
		numeral += "V"
	}
	for ; (i / 4) > 0; i -= 4 {
		numeral += "IV"
	}
	for ; (i / 1) > 0; i -= 1 {
		numeral += "I"
	}

	return numeral, nil
}
