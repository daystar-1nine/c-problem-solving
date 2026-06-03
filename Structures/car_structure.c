/*
Define a Car structure with fields for
make, model, year, and color.
*/

#include <stdio.h>

// Structure Definition
struct Car {
    char make[50];
    char model[50];
    int year;
    char color[30];
};

int main() {
    /*
     * Logic:
     * - Goal: Define a Car structure with fields for make, model, year, and color.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    struct Car car1 = {
        "Toyota",
        "Fortuner",
        2024,
        "Black"
    };

    printf("Car Details:\n");
    printf("Make : %s\n", car1.make);
    printf("Model: %s\n", car1.model);
    printf("Year : %d\n", car1.year);
    printf("Color: %s\n", car1.color);

    return 0;
}