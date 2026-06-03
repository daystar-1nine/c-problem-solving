/*
Write a function that takes a string
and reverses it in place.
*/

#include <stdio.h>
#include <string.h>

// Function Definition
void reverseString(char str[]) {
    /*
     * Logic:
     * 1. Uses strcspn to find the index of '\n' and replaces it with '\0' to safely
     *    strip trailing newlines left by fgets, preventing index out-of-bounds on empty strings.
     * 2. Uses a two-pointer approach with 'start' index (0) and 'end' index (strlen(str) - 1).
     * 3. Swaps characters at 'start' and 'end' using a temporary variable.
     * 4. Increments start and decrements end in a loop until the pointers meet, reversing the string in-place.
     */
    str[strcspn(str, "\n")] = '\0';

    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while(start < end) {

        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}