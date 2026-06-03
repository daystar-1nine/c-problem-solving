// 2. Program using continue to print only even numbers

#include<stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: 2. Program using continue to print only even numbers
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int n;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Even numbers are:\n");

    for(int i = 1; i <= n; i++) {

        if(i % 2 != 0) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}