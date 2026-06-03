/*
Demonstrate with a function increment that the
original integer passed to it does not change
after incrementing it inside the function.
*/

#include <stdio.h>

// Function Definition
void increment(int num) {
    num++;

    printf("Value inside function = %d\n", num);
}

int main() {
    /*
     * Logic:
     * - Goal: Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int number = 10;

    printf("Original value before function call = %d\n", number);

    increment(number);

    printf("Original value after function call = %d\n", number);

    return 0;
}