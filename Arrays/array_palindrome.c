/*
Create a program to check if the array is palindrome or not.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to check if the array is palindrome or not.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int arr[5], i;
    int isPalindrome = 1;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5 / 2; i++) {

        if(arr[i] != arr[5 - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1) {
        printf("Array is Palindrome.\n");
    } else {
        printf("Array is NOT Palindrome.\n");
    }

    return 0;
}