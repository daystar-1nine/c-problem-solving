//Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g., High for scores > 80, Moderate for 50-80, Low for < 50).
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int score;

    printf("Enter student score: ");
    scanf("%d", &score);

    (score > 80)
        ? printf("High\n")
        : (score >= 50)
            ? printf("Moderate\n")
            : printf("Low\n");

    return 0;
}