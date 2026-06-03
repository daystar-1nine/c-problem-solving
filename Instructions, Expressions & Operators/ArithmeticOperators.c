//Create a program that takes two numbers and shows result of all arithmetic operators (+, -, *, /, %).

#include <stdio.h>
int main() {
    /*
     * Logic:
     * - Goal: Create a program that takes two numbers and shows result of all arithmetic operators (+, -, *, /, %).
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num1;
    int num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    float div = (float) num1 / num2;
    int mod = num1 % num2;

    printf("\nSum = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %.2f\n", div);
    printf("Modulus = %d\n", mod);

    return 0;
}