//Create a program to find the Greatest Common Divisor (GCD) of two integers.

#include <stdio.h>

int main() {

    int first, second;

    printf("Welcome to GCD Calculator\n");

    printf("Please enter the first number: ");
    if (scanf("%d", &first) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Now, enter the second number: ");
    if (scanf("%d", &second) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int temp_first = (first < 0) ? -first : first;
    int temp_second = (second < 0) ? -second : second;

    while (temp_second != 0) {
        int temp = temp_second;
        temp_second = temp_first % temp_second;
        temp_first = temp;
    }

    int gcd = temp_first;

    printf("The GCD of %d and %d is %d\n", first, second, gcd);

    return 0;
}