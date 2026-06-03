/*
Write a program that declares an integer variable
and a pointer to it. Assign a value and print it
using the pointer.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Write a program that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int num = 100;

    // Pointer declaration
    int *ptr;

    // Assign address of num to pointer
    ptr = &num;

    printf("Value of num = %d\n", num);

    // Print value using pointer
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}