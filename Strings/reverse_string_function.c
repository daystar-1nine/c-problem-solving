/*
Write a function that takes a string
and reverses it in place.
*/

#include <stdio.h>
#include <string.h>

// Function Definition
void reverseString(char str[]) {

    // Remove newline character if present
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