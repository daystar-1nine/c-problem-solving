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