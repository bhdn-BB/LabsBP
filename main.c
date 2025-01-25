#include <stdlib.h>
#include <conio.h>
#include "algorithm.h"
#include "validators.h"

#define LOWER_LIMIT 1
#define UPPER_LIMIT 4999
#define ESC 27

int main() {
    do {
        system("cls");
        printf("\nHello! This program converts numbers from Arabic to Roman.\n");

        unsigned int arabicUserInput = getUnsignedIntegerInput("Enter the numeric", LOWER_LIMIT, UPPER_LIMIT);

        RomanConversionSystem romanSystem = {
            .romanSymbols = {'M', 'D', 'C', 'L', 'X', 'V', 'I'},
            .arabicValues = {1000, 500, 100, 50, 10, 5, 1}
        };

        convertAndPrintNumeral(&romanSystem, arabicUserInput);

        printf("\nPress any key to try again or 'Esc' to exit.");
    } while (getch() != ESC);

    return 0;
}
