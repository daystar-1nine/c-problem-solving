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
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = max(num1, num2);

    printf("Larger number = %.2f\n", result);

    return 0;
}