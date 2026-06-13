#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Writes multiple lines of text entered by the user into a text file.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    FILE *fp = fopen("output.txt", "w");
    char line[100];
    int n;

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many lines? ");
    scanf("%d", &n);
    getchar(); // clear buffer

    for (int i = 0; i < n; i++) {
        printf("Enter line %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, fp);
    }

    fclose(fp);
    return 0;
}