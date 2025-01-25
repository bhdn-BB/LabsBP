#include "algorithm.h"

void printRomanNumeral(const RomanConversionSystem *conversionSystem, unsigned int arabicNumber) {
    printf("Roman numeral:");
    for (int i = 0; i < NUM_ROMAN_SYMBOLS; i++) {
        while (arabicNumber >= conversionSystem->arabicValues[i]) {
            arabicNumber -= conversionSystem->arabicValues[i];
            printf("%c", conversionSystem->romanSymbols[i]);
        }
    }
}

void convertAndPrintNumeral(const RomanConversionSystem *conversionSystem, unsigned int arabicNumber) {
    printRomanNumeral(conversionSystem, arabicNumber);
    printf("\nArabic numeral: %u\n", arabicNumber);
}
