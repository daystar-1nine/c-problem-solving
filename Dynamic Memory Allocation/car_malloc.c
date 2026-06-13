#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char brand[50];
    int year;
    float price;
};

int main() {
    /*
     * Logic:
     * - Goal: Allocates dynamic memory for a car structure using malloc, initializes fields, and frees memory.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    struct Car *c;

    // allocate memory
    c = (struct Car *)malloc(sizeof(struct Car));

    if (c == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // assign values
    strcpy(c->brand, "Toyota");
    c->year = 2022;
    c->price = 1500000.50;

    // print
    printf("Brand: %s\nYear: %d\nPrice: %.2f\n", c->brand, c->year, c->price);

    // free memory
    free(c);

    return 0;
}