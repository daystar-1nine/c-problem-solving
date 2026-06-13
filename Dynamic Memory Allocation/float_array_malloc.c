#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
     * Logic:
     * - Goal: Dynamically allocates memory for an array of floats, populates elements, and calculates sum/average.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float *arr = (float *)malloc(n * sizeof(float));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // input
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // output
    printf("Values:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    free(arr);
    return 0;
}