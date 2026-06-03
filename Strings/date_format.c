/*
Use printf with format specifiers to format
and print a date string (day, month, year).
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Use printf with format specifiers to format and print a date string (day, month, year).
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int day = 1;
    int month = 6;
    int year = 2026;

    printf("Formatted Date: %02d/%02d/%d\n",
           day, month, year);

    return 0;
}