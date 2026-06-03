/*
Create a program to find the maximum and minimum
element in an array.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to find the maximum and minimum element in an array.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int arr[5], i;
    int max, min;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 1; i < 5; i++) {

        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}