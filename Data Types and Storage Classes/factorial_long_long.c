/*
Write a program to demonstrate the difference
in range between long and long long by
calculating the factorial of 20.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int i;

    long factorial_long = 1;
    long long factorial_longlong = 1;

    // Calculate factorial of 20
    for(i = 1; i <= 20; i++) {
        factorial_long = factorial_long * i;
        factorial_longlong = factorial_longlong * i;
    }

    printf("Factorial using long = %ld\n", factorial_long);
    printf("Factorial using long long = %lld\n", factorial_longlong);

    return 0;
}