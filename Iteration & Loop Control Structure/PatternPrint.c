#include<stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Processes user inputs and calculates results using standard control flows.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Right Half Pyramid
    printf("\nRight Half Pyramid:\n");

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Reverse Right Half Pyramid
    printf("\nReverse Right Half Pyramid:\n");

    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Left Half Pyramid
    printf("\nLeft Half Pyramid:\n");

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}