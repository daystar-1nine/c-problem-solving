#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Reads integers from a text file and computes their total sum.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0;

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
    }

    printf("Sum = %d\n", sum);

    fclose(fp);
    return 0;
}