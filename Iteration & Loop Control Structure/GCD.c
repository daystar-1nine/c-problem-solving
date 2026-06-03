//Create a program to find the Greatest Common Divisor (GCD) of two integers.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * 1. Reads two integers 'first' and 'second' with scanf validation to ensure inputs are numeric.
     * 2. Converts inputs to absolute values ('temp_first', 'temp_second') to support negative coordinates safely.
     * 3. Implements the iterative Euclidean Algorithm:
     *    - While the divisor (temp_second) is not 0, computes the remainder: temp_first % temp_second.
     *    - Shifts temp_second into temp_first, and the remainder into temp_second.
     *    - This reduces complexity from O(min(a,b)) to logarithmic time O(log(min(a,b))).
     * 4. The final value left in 'temp_first' is the Greatest Common Divisor (GCD).
     */
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