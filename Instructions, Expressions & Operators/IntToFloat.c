//Given an integer value, convert it to a floating-point value and print both.

#include <stdio.h>

int main() {

    int num1 = 19;

    float num2 = (float) num1;

    printf("Integer value = %d\n", num1);
    printf("Floating-point value = %.2f\n", num2);

    return 0;
}