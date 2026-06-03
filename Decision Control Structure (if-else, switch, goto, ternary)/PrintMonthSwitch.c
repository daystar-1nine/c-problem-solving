//Create a program to print the month of the year based on a number (1-12) input by the user.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to print the month of the year based on a number (1-12) input by the user.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {

        case 1:
            printf("January\n");
            break;

        case 2:
            printf("February\n");
            break;

        case 3:
            printf("March\n");
            break;

        case 4:
            printf("April\n");
            break;

        case 5:
            printf("May\n");
            break;

        case 6:
            printf("June\n");
            break;

        case 7:
            printf("July\n");
            break;

        case 8:
            printf("August\n");
            break;

        case 9:
            printf("September\n");
            break;

        case 10:
            printf("October\n");
            break;

        case 11:
            printf("November\n");
            break;

        case 12:
            printf("December\n");
            break;

        default:
            printf("Invalid month number\n");
    }

    return 0;
}