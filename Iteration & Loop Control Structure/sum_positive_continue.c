/*
Create a program using continue to sum all positive numbers
entered by the user; skip any negative numbers.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int num, sum = 0;

    printf("Enter numbers (0 to stop):\n");

    while(1) {
        scanf("%d", &num);

        // Stop the loop
        if(num == 0) {
            break;
        }

        // Skip negative numbers
        if(num < 0) {
            continue;
        }

        sum = sum + num;
    }

    printf("Sum of positive numbers = %d\n", sum);

    return 0;
}