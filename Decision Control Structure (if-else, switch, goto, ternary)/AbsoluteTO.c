//Create a program to calculate the absolute value of a given integer using ternary operator.

#include <stdio.h>
int main() {
    /*
     * Logic:
     * - Goal: Create a program to calculate the absolute value of a given integer using ternary operator.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num, absolute;

    printf("Enter number: ");
    scanf("%d", &num);

    absolute = (num < 0) ? -num : num;

    printf("Absolute value is %d\n", absolute);

    return 0;
}