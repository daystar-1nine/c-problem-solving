#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Attempts to open a file and checks for NULL to verify if the file exists and is accessible.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    char filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File could NOT be opened.\n");
    } else {
        printf("File opened successfully!\n");
        fclose(fp);
    }

    return 0;
}