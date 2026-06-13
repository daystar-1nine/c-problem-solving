/*
Implement a void minmax(int *a, int *b, int *min, int *max)
function that takes two integer pointers a and b as input
and assigns the smaller value to min and the larger value
to max using call by reference.

Write a main function to test it with different values.
*/

#include <stdio.h> // Include standard I/O functions

// Function Definition
void minmax(int *a, int *b, int *min, int *max) {

    if(*a < *b) {
        *min = *a;
        *max = *b;
    } else {
        *min = *b;
        *max = *a;
    }
}

int main() {
    /*
     * Logic:
     * - Goal: Implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference. Write a main function to test it with different values.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int num1, num2;
    int minimum, maximum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call
    minmax(&num1, &num2, &minimum, &maximum);

    printf("Minimum = %d\n", minimum);
    printf("Maximum = %d\n", maximum);

    return 0;
}