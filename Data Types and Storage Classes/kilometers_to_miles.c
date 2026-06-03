/*
Create a program that converts a large number of
kilometers to miles, using long or long long
to store the distance.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    long long kilometers;
    double miles;

    printf("Enter distance in kilometers: ");
    scanf("%lld", &kilometers);

    // Conversion Formula
    miles = kilometers * 0.621371;

    printf("Distance in miles = %.2lf\n", miles);

    return 0;
}