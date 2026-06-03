/*
Write a program to change the value of an integer
variable using a pointer and the * operator.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Write a program to change the value of an integer variable using a pointer and the * operator.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int num = 10;

    // Pointer declaration
    int *ptr = &num;

    printf("Before change = %d\n", num);

    // Change value using pointer
    *ptr = 50;

    printf("After change = %d\n", num);

    return 0;
}