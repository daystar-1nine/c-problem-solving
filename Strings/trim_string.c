/*
Implement a trim function that removes leading
and trailing spaces from a string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function Definition
void trim(char str[]) {
    /*
     * Logic:
     * 1. Strips trailing newlines securely using strcspn() to protect empty bounds.
     * 2. Finds the index of the first non-whitespace character by moving 'start' forward
     *    with isspace() (safely cast to unsigned char).
     * 3. Finds the index of the last non-whitespace character by moving 'end' backward.
     * 4. Shifts the trimmed substring (from 'start' to 'end') to index 0 of the buffer.
     * 5. Places the null terminator '\0' at the correct position (j) to truncate the string.
     */
    str[strcspn(str, "\n")] = '\0';

    int start = 0;
    int end = strlen(str) - 1;
    int i, j;

    // Find first non-space character
    while(isspace((unsigned char)str[start])) {
        start++;
    }

    // Find last non-space character
    while(end >= start && isspace((unsigned char)str[end])) {
        end--;
    }

    // Shift string to beginning
    for(i = start, j = 0; i <= end; i++, j++) {
        str[j] = str[i];
    }

    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string with spaces:\n");
    fgets(str, sizeof(str), stdin);

    trim(str);

    printf("Trimmed String: '%s'\n", str);

    return 0;
}