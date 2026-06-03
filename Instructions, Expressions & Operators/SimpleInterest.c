//Create a program to calculate simple interest.
//Simple Interest = (P × T × R) / 100


#include <stdio.h>
int main() {
    /*
     * Logic:
     * - Goal: Create a program to calculate simple interest. Simple Interest = (P × T × R) / 100
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int principal, time;
    float interest;

    printf("Calculate Simple Interest!!!!\n\n");

    printf("Enter principal value: ");
    scanf("%d", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &interest);

    printf("Enter time period: ");
    scanf("%d", &time);

    float SI = (principal * interest * time) / 100;

    printf("Simple Interest is %.2f\n", SI);

    return 0;
}