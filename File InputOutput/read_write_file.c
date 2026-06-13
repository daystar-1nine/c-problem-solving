#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Writes text to a file and reads it back to display on the console.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    FILE *fp = fopen("data.txt", "w+");
    char text[100];

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // writing
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);

    // move pointer to start
    rewind(fp);

    // reading
    printf("\nReading from file:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);
    return 0;
}