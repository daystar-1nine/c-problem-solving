/*
Pass a Car structure to a function that prints
out a description of the car in one complete sentence.
*/

#include <stdio.h>

// Structure Definition
struct Car {
    char make[50];
    char model[50];
    int year;
    char color[30];
};

// Function Definition
void printDescription(struct Car car) {

    printf("This car is a %d %s %s and its color is %s.\n",
           car.year,
           car.make,
           car.model,
           car.color);
}

int main() {
    /*
     * Logic:
     * - Goal: Pass a Car structure to a function that prints out a description of the car in one complete sentence.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    struct Car car1 = {
        "Honda",
        "City",
        2023,
        "White"
    };

    // Function Call
    printDescription(car1);

    return 0;
}