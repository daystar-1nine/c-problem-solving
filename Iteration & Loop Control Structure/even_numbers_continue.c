/*
Create a program using continue to print only even numbers
using continue for odd numbers.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program using continue to print only even numbers using continue for odd numbers.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int i;

    printf("Even numbers from 1 to 20:\n");

    for(i = 1; i <= 20; i++) {

        // Skip odd numbers
        if(i % 2 != 0) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}