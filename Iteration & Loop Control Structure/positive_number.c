/*
Create a program that prompts the user to enter a positive number.
Use a do-while loop to keep asking for the number until
the user enters a valid positive number.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program that prompts the user to enter a positive number. Use a do-while loop to keep asking for the number until the user enters a valid positive number.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);

        if(num <= 0) {
            printf("Invalid input! Please enter a positive number.\n");
        }

    } while(num <= 0);

    printf("You entered a valid positive number: %d\n", num);

    return 0;
}