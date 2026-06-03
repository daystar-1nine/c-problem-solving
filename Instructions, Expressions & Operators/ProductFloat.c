//Create a program to calculate product of two floating points numbers.

#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Create a program to calculate product of two floating points numbers.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    float num1;
    float num2;

    printf("Enter number 1: ");
    scanf("%f",&num1);
    printf("Enter number 2: ");
    scanf("%f",&num2);

    float mul = num1 * num2;
    printf("Multiplication of 2 float number is %.2f", mul);

    return 0;
}