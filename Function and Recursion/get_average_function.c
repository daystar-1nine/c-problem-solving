/*
Call a function get_average that takes five int
numbers and returns the average.
*/

#include <stdio.h>

// Function Definition
float get_average(int a, int b, int c, int d, int e) {

    return (a + b + c + d + e) / 5.0;
}

int main() {
    float average;

    average = get_average(10, 20, 30, 40, 50);

    printf("Average = %.2f\n", average);

    return 0;
}