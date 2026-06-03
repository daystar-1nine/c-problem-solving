/*
Create a function max that takes two float
arguments and returns the larger value.
*/

#include <stdio.h>

// Function Definition
float max(float a, float b) {

    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    /*
     * Logic:
     * - Goal: Create a function max that takes two float arguments and returns the larger value.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = max(num1, num2);

    printf("Larger number = %.2f\n", result);

    return 0;
}