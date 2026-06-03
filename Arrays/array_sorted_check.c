/*
Create a program to check if the given array is sorted.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to check if the given array is sorted.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int arr[5], i;
    int isSorted = 1;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 4; i++) {

        if(arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted == 1) {
        printf("Array is Sorted.\n");
    } else {
        printf("Array is NOT Sorted.\n");
    }

    return 0;
}