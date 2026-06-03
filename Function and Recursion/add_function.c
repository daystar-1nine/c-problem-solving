/*
Question 51:
Write a function that adds that takes 4 int
parameters and returns the sum.
*/

#include <stdio.h>

// Function Definition
int add(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    /*
     * Logic:
     * - Goal: Write a function that adds that takes 4 int parameters and returns the sum.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int result;

    result = add(10, 20, 30, 40);

    printf("Sum = %d\n", result);

    return 0;
}