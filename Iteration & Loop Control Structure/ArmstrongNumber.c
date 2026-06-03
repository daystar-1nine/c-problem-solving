//Program to check if a number is an Armstrong number

#include<stdio.h>
int main() {
    /*
     * Logic:
     * - Goal: Program to check if a number is an Armstrong number
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num, originalNum, rem, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(originalNum != 0) {
        rem = originalNum % 10;
        result = result + (rem * rem * rem);
        originalNum = originalNum / 10;
    }

    if(result == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}