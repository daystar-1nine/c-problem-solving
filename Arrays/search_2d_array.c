/*
Create a program to search an element in a 2-D array.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to search an element in a 2-D array.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int arr[3][3];
    int i, j, num, found = 0;

    printf("Enter 3x3 matrix elements:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            if(arr[i][j] == num) {
                printf("Element found at position [%d][%d]\n", i, j);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("Element not found.\n");
    }

    return 0;
}