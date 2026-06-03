/*
Declare a pointer to a char and use it to read
and print a character entered by the user.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Declare a pointer to a char and use it to read and print a character entered by the user.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    char ch;

    // Character pointer
    char *ptr = &ch;

    printf("Enter a character: ");
    scanf("%c", ptr);

    printf("Character entered = %c\n", *ptr);

    return 0;
}