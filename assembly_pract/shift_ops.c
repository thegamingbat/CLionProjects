//
// Created by danis on 12/4/2023.
//
#include <stdio.h>

int main() {
    int num = 16;
    int divisor = 4;
    int constant = 3;

    // Divide by multiple of 2 (right shift)
    int resultDivide = num / divisor;

    // Multiply by constant (left shift)
    int resultMultiply = num << constant;

    printf("Result of division: %d\n", resultDivide);
    printf("Result of multiplication: %d\n", resultMultiply);

    return 0;
}
