/*
Write a function that uses pointer arithmetic
to copy an array of char into another.
*/

#include <stdio.h>

// Function Definition
void copyString(const char *source, char *destination) {

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