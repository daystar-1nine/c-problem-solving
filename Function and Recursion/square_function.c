/*

Define a function square that takes an int
and returns its square.
*/

#include <stdio.h>

// Function Definition
int square(int num) {
    return num * num;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = square(number);

    printf("Square = %d\n", result);

    return 0;
}