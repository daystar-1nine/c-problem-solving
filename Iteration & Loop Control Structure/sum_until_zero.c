/*
Develop a program that calculates the sum of all numbers
entered by a user until the user enters 0.
The total sum should then be displayed.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should then be displayed.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int num, sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        sum = sum + num;

    } while(num != 0);

    printf("Total Sum = %d\n", sum);

    return 0;
}