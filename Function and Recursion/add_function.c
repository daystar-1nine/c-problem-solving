/*
Question 51:
Write a function that adds that takes 4 int
parameters and returns the sum.
*/

#include <stdio.h>

// Function Definition
int add(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int result;

    result = add(10, 20, 30, 40);

    printf("Sum = %d\n", result);

    return 0;
}