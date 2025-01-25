#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <stdio.h>

#define NUM_ROMAN_SYMBOLS 7

typedef struct {
    char romanSymbols[NUM_ROMAN_SYMBOLS];
    unsigned int arabicValues[NUM_ROMAN_SYMBOLS];
} RomanConversionSystem;

void printRomanNumeral(const RomanConversionSystem *conversionSystem, unsigned int arabicNumber);
void convertAndPrintNumeral(const RomanConversionSystem *conversionSystem, unsigned int arabicNumber);

#endif
