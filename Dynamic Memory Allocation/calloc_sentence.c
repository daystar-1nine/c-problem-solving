#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
     * Logic:
     * - Goal: Allocates dynamic character array using calloc, reads a sentence, and releases the memory.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    int size;
    printf("Enter maximum sentence length: ");
    scanf("%d", &size);

    char *str = (char *)calloc(size, sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    getchar(); // clear newline

    printf("Enter sentence: ");
    fgets(str, size, stdin);

    printf("You entered: %s", str);

    free(str);
    return 0;
}