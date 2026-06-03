/*
Create a program to return a new array deleting
a specific element.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * 1. Allocates static buffers of size 10 for both the original (arr) and the filtered (newArr) arrays.
     * 2. Prompts the user for the number of terms 'n' and validates that 1 <= n <= 10 to prevent array out-of-bounds writes.
     * 3. Confirms that scanf reads succeed successfully to ensure no uninitialized variables are processed.
     * 4. Prompts the user for the 'element' to be deleted.
     * 5. Loops through 'arr' and copies any values that do NOT equal 'element' into 'newArr' at index 'j'.
     * 6. Prints the resulting 'newArr' array of size 'j'.
     */
    int arr[10], newArr[10];
    int i, n, element, j = 0;

    printf("Enter number of elements (1-10): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 1 || n > 10) {
        printf("Invalid number of elements. Must be between 1 and 10.\n");
        return 1;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid element input.\n");
            return 1;
        }
    }

    printf("Enter element to delete: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {

        if(arr[i] != element) {
            newArr[j] = arr[i];
            j++;
        }
    }

    printf("New array:\n");

    for(i = 0; i < j; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}