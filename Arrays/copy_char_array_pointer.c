/*
Write a function that uses pointer arithmetic
to copy an array of char into another.
*/

#include <stdio.h>

// Function Definition
void copyString(const char *source, char *destination) {
    /*
     * Logic:
     * 1. Uses pointer arithmetic to traverse the source string.
     * 2. Continues copying characters until the source pointer dereferences to the null terminator ('\0').
     * 3. Inside the loop, copies the character at *source to *destination, then increments both pointers.
     * 4. Once complete, writes the null terminator ('\0') to the end of the destination buffer.
     */
    while(*source != '\0') {
        *destination = *source;

        source++;
        destination++;
    }

    *destination = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%99s", str1);

    copyString(str1, str2);

    printf("Copied string = %s\n", str2);

    return 0;
}