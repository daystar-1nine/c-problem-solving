//Create a program to find if the given number is even or odd using ternary operator.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to find if the given number is even or odd using ternary operator.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}