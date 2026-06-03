/*
Write a program to convert an input string
to uppercase.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    /*
     * Logic:
     * - Goal: Write a program to convert an input string to uppercase.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {

        str[i] = toupper(str[i]);
        i++;
    }

    printf("Uppercase String:\n%s", str);

    return 0;
}