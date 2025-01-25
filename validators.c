#include "validators.h"

bool isValidUnsignedIntegerInput(unsigned int *inputValue) {
    bool isValid = scanf("%u", inputValue) != 1 || getchar() != '\n';
    fflush(stdin);
    return isValid;
}

bool isWithinRange(unsigned int *inputValue, const unsigned int minValue, const unsigned int maxValue) {
    return *inputValue < minValue || *inputValue > maxValue;
}

unsigned int getUnsignedIntegerInput(char *prompt, const unsigned int minValueInput, const unsigned int maxValueInput) {
    unsigned int value = 0;
    bool isValid = false;
    do {
        printf("%s [%u ; %u]:", prompt, minValueInput, maxValueInput);
        if (isValidUnsignedIntegerInput(&value)) {
            printf("Invalid input. Try again.\n");
        } else if (isWithinRange(&value, minValueInput, maxValueInput)) {
            printf("Value is out of range.\n");
        } else {
            isValid = true;
        }
    } while (!isValid);

    return value;
}
