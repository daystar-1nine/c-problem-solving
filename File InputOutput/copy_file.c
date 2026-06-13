#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Copies content character-by-character from a source file to a destination file.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("dest.txt", "w");

    char ch;

    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}