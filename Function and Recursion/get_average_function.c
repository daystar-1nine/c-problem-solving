/*
Call a function get_average that takes five int
numbers and returns the average.
*/

#include <stdio.h>

// Function Definition
float get_average(int a, int b, int c, int d, int e) {

    return (a + b + c + d + e) / 5.0;
}

int main() {
    /*
     * Logic:
     * - Goal: Call a function get_average that takes five int numbers and returns the average.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    float average;

    average = get_average(10, 20, 30, 40, 50);

    printf("Average = %.2f\n", average);

    return 0;
}