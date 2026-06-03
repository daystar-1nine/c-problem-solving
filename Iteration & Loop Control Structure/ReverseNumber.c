//Program to reverse the digits of a number

#include<stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Program to reverse the digits of a number
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    printf("Reversed Number = %d", reverse);

    return 0;
}