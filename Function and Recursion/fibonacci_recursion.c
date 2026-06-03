/*
Create a program using recursion to display
the Fibonacci series upto a certain number.
*/

#include <stdio.h>

// Tail-recursive helper function to calculate Fibonacci in O(n) time
int fibonacciTail(int n, int a, int b) {
    /*
     * Logic:
     * 1. Uses Tail Recursion to calculate the n-th Fibonacci number.
     * 2. The parameters 'a' and 'b' act as running accumulators for F(i) and F(i+1).
     * 3. Base Cases: if n == 0, returns 'a'. If n == 1, returns 'b'.
     * 4. Recursive Step: Calls fibonacciTail(n - 1, b, a + b). 
     *    Since the recursive call is the final statement, modern compilers optimize it to a simple loop.
     *    This improves time complexity from exponential O(2^n) to linear O(n), returning answers instantly.
     */
    if (n == 0) {
        return a;
    }
    if (n == 1) {
        return b;
    }
    return fibonacciTail(n - 1, b, a + b);
}

// Recursive Function Wrapper
int fibonacci(int n) {
    if (n < 0) {
        return 0; // Guard against negative inputs
    }
    return fibonacciTail(n, 0, 1);
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("Number of terms cannot be negative.\n");
        return 1;
    }

    printf("Fibonacci Series:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}