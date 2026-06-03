/*
Read a line of text from the user using fgets
and then print it using puts.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Read a line of text from the user using fgets and then print it using puts.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    char text[100];

    printf("Enter a line of text:\n");

    fgets(text, sizeof(text), stdin);

    printf("\nYou entered:\n");

    puts(text);

    return 0;
}