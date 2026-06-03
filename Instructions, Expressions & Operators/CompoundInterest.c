//Create a program to calculate Compound interest.
//Compound Interest = P(1 + R / 100)^t


#include <stdio.h>
#include <math.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program to calculate Compound interest. Compound Interest = P(1 + R / 100)^t
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    printf("Compound Interest!!!\n\n");

    int principal, time;
    float interest;

    printf("Enter principal amount: ");
    scanf("%d", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &interest);

    printf("Enter time period: ");
    scanf("%d", &time);

    float amount = principal * pow((1 + interest / 100), time);

    float CI = amount - principal;

    printf("\nCompound Interest is %.2f\n", CI);

    return 0;
}