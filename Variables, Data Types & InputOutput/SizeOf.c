//Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num1 = 1;
    float num2 = 1.1;
    double num3 = 1.22222222222;
    char a = 'A';

    printf("Size of num1 = %zu bytes\n", sizeof(num1));
    printf("Size of num2 = %zu bytes\n", sizeof(num2));
    printf("Size of num3 = %zu bytes\n", sizeof(num3));
    printf("Size of a = %zu bytes\n", sizeof(a));

    return 0;
}