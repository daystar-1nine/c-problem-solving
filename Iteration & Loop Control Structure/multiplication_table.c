/*
Create a program using for loop multiplication table for a number.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program using for loop multiplication table for a number.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}