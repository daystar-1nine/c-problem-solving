//Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    char firstName[30] = "Suraj";
    char lastName[30] = "Sawant";
    int age = 20;

    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    printf("Age: %d\n", age);

    return 0;
}