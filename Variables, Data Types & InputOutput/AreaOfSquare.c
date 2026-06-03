//Create a program to print the area of a square by inputting its side length.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to print the area of a square by inputting its side length.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int side;

    printf("Square Area Calculator!!!\n\n");

    printf("Enter side of square: ");
    scanf("%d", &side);

    int area = side * side;

    printf("Area of square is %d\n", area);

    return 0;
}