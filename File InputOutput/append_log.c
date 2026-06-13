#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Opens a log file in append mode ('a') and appends user-input text to it.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    FILE *fp = fopen("log.txt", "a");
    char text[100];

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); // clear buffer
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);
    return 0;
}