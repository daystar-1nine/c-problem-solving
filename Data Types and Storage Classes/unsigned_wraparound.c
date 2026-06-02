/*
Write a C program that initializes an unsigned int
to its maximum possible value and an int to a
negative number.

Add 1 to both, and print the results to show
how the unsigned int wraps around to 0,
whereas the int remains negative due to overflow.
*/

#include <stdio.h>
#include <limits.h>

int main() {

    // Maximum unsigned int value
    unsigned int u = UINT_MAX;

    /* 
     * Negative int value.
     * Note: Incrementing -10 to -9 is a standard arithmetic addition.
     * It does not trigger an integer overflow. Real signed overflow 
     * occurs when exceeding limits (e.g., INT_MAX + 1), which is 
     * undefined behavior in C but often wraps to INT_MIN.
     */
    int n = -10;

    printf("Before adding 1:\n");
    printf("Unsigned int = %u\n", u);
    printf("Signed int = %d\n", n);

    // Add 1
    u = u + 1; // Wraps around to 0 (defined behavior for unsigned)
    n = n + 1; // Standard addition: -10 + 1 = -9

    printf("\nAfter adding 1:\n");
    printf("Unsigned int = %u (Wraparound occurred)\n", u);
    printf("Signed int = %d (Standard addition)\n", n);

    return 0;
}