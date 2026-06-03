//Create a program to sum all odd numbers from 1 to a specified number N.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to sum all odd numbers from 1 to a specified number N.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int sum = 0;
    int num;

    printf("Enter value of N: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}