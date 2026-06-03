/*
Create a program to find number of occurrences
of an element in an array.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to find number of occurrences of an element in an array.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int arr[10], i, num, count = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {

        if(arr[i] == num) {
            count++;
        }
    }

    printf("Number of occurrences = %d\n", count);

    return 0;
}