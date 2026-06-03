/*
Create a program that checks if a given
string is a palindrome and outputs the result.
*/

#include <stdio.h>
#include <string.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program that checks if a given string is a palindrome and outputs the result.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    char str[100];
    int start = 0, end;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    end = strlen(str) - 1;

    while(start < end) {

        if(str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if(isPalindrome == 1) {
        printf("String is Palindrome.\n");
    } else {
        printf("String is NOT Palindrome.\n");
    }

    return 0;
}