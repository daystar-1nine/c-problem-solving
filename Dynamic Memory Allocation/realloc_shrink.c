#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*
     * Logic:
     * - Goal: Demonstrates how to resize dynamically allocated memory blocks using realloc.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // random numbers
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // shrink size
    int newSize = n / 2;
    arr = (int *)realloc(arr, newSize * sizeof(int));

    printf("\n\nAfter shrinking:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}