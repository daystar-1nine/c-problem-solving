//Program to print Fibonacci series up to a certain number

#include<stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Program to print Fibonacci series up to a certain number
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int n, first = 0, second = 1, next;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while(first <= n) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}