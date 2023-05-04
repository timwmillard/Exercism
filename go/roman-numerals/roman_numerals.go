package romannumerals

import (
	"errors"
)

type numeral struct {
	roman  string
	arabic int
}

var romanNumeralTable = []numeral{
	{roman: "M", arabic: 1000},
	{roman: "CM", arabic: 900},
	{roman: "D", arabic: 500},
	{roman: "CD", arabic: 400},
	{roman: "C", arabic: 100},
	{roman: "XC", arabic: 90},
	{roman: "L", arabic: 50},
	{roman: "XL", arabic: 40},
	{roman: "X", arabic: 10},
	{roman: "IX", arabic: 9},
	{roman: "V", arabic: 5},
	{roman: "IV", arabic: 4},
	{roman: "I", arabic: 1},
}

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
	if number < 1 || number > 3999 {
		return "", errors.New("out of range")
	}
	var numeral string
	var i = number
	for _, n := range romanNumeralTable {
		for ; (i / n.arabic) > 0; i -= n.arabic {
			numeral += n.roman
		}
	}

	return numeral, nil
}
