/*
Create a program to merge two sorted arrays.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to merge two sorted arrays.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int arr1[5], arr2[5], merged[10];
    int i, j, k = 0;

    printf("Enter 5 sorted elements for first array:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 sorted elements for second array:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;

    while(i < 5 && j < 5) {

        if(arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }

        k++;
    }

    while(i < 5) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while(j < 5) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged array:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}