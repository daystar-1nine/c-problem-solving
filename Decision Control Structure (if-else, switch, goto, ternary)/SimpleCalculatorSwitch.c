//Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division.

#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(op) {

        case '+':
            printf("Result = %d\n", num1 + num2);
            break;

        case '-':
            printf("Result = %d\n", num1 - num2);
            break;

        case '*':
            printf("Result = %d\n", num1 * num2);
            break;

        case '/':
            printf("Result = %.2f\n", (float)num1 / num2);
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}