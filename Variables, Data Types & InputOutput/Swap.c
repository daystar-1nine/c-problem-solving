#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Swaps the values of two variables.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num1 = 1;
    int num2 = 2;
    int temp;

    printf("Before Swapping:\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping:\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);

    return 0;
}