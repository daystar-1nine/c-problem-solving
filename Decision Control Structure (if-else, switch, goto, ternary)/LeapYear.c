//Create a program that determines if a given year is a leap year (considering conditions like divisible by 4 but not 100, unless also divisible by 400).

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program that determines if a given year is a leap year (considering conditions like divisible by 4 but not 100, unless also divisible by 400).
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {

        printf("%d is a Leap Year\n", year);

    } else {

        printf("%d is NOT a Leap Year\n", year);
    }

    return 0;
}