/*
Create a program to reverse an array.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to reverse an array.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");

    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}