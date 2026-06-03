//Given an integer value, convert it to a floating-point value and print both.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Given an integer value, convert it to a floating-point value and print both.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num1 = 19;

    float num2 = (float) num1;

    printf("Integer value = %d\n", num1);
    printf("Floating-point value = %.2f\n", num2);

    return 0;
}