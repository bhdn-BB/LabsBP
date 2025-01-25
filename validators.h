#ifndef VALIDATORS_H
#define VALIDATORS_H

#include <stdio.h>
#include <stdbool.h>

bool isValidUnsignedIntegerInput(unsigned int *inputValue);
bool isWithinRange(unsigned int *inputValue, const unsigned int minValue, const unsigned int maxValue);
unsigned int getUnsignedIntegerInput(char *prompt, const unsigned int minValueInput, const unsigned int maxValueInput);

#endif
