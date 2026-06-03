//Create a program to find the Least Common Multiple (LCM) of two numbers.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to find the Least Common Multiple (LCM) of two numbers.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int first, second;

    printf("Welcome to LCM Calculator\n");

    printf("Please enter the first number: ");
    scanf("%d", &first);

    printf("Now, enter the second number: ");
    scanf("%d", &second);

    int min = (first > second) ? first : second;

    int max = first * second;

    for (int i = min; i <= max; i++) {

        if (i % first == 0 && i % second == 0) {

            printf("The LCM of %d and %d is %d\n",first, second, i);

            break;
        }
    }

    return 0;
}